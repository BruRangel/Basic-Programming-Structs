import os
import tkinter as tk
from tkinter import filedialog, messagebox
from pytube import YouTube
from threading import Thread
from moviepy.video.io.VideoFileClip import VideoFileClip
from moviepy.audio.io.AudioFileClip import AudioFileClip

class YouTubeDownloaderApp:
    def __init__(self, root):
        self.root = root
        self.root.title("YouTube Downloader")
        self.root.geometry("400x350")
        self.root.configure(bg="#2b2b2b")

        # Variáveis
        self.video_link = tk.StringVar()
        self.destination_folder = tk.StringVar()
        self.start_time = tk.StringVar()
        self.end_time = tk.StringVar()
        self.download_type = tk.StringVar(value="video")
        self.destination_folder.set(self.get_saved_destination())

        # Fonte moderna
        font_style = ("Helvetica", 12)

        # Campos de entrada
        tk.Label(self.root, text="Link do Vídeo:", bg="#2b2b2b", fg="#ffffff", font=font_style).pack(pady=5)
        self.link_entry = tk.Entry(self.root, textvariable=self.video_link, width=50, font=font_style)
        self.link_entry.pack(pady=5)

        tk.Button(self.root, text="Escolher Pasta de Destino", command=self.choose_destination_folder, bg="#007acc", fg="#ffffff", font=font_style).pack(pady=5)

        tk.Label(self.root, text="Tempo de Início (em segundos):", bg="#2b2b2b", fg="#ffffff", font=font_style).pack(pady=5)
        self.start_time_entry = tk.Entry(self.root, textvariable=self.start_time, width=20, font=font_style)
        self.start_time_entry.pack(pady=5)

        tk.Label(self.root, text="Tempo de Fim (em segundos):", bg="#2b2b2b", fg="#ffffff", font=font_style).pack(pady=5)
        self.end_time_entry = tk.Entry(self.root, textvariable=self.end_time, width=20, font=font_style)
        self.end_time_entry.pack(pady=5)

        tk.Label(self.root, text="Escolha o Tipo de Download:", bg="#2b2b2b", fg="#ffffff", font=font_style).pack(pady=5)
        tk.Radiobutton(self.root, text="Vídeo (mp4)", variable=self.download_type, value="video", bg="#2b2b2b", fg="#ffffff", font=font_style, selectcolor="#444444").pack(pady=2)
        tk.Radiobutton(self.root, text="Áudio (mp3)", variable=self.download_type, value="audio", bg="#2b2b2b", fg="#ffffff", font=font_style, selectcolor="#444444").pack(pady=2)

        self.progress_bar = tk.Label(self.root, text="", bd=1, relief=tk.SUNKEN, anchor=tk.W, bg="#444444", fg="#ffffff", font=font_style)
        self.progress_bar.pack(fill=tk.X, side=tk.BOTTOM, pady=5)

        self.status_label = tk.Label(self.root, text="", bd=1, relief=tk.SUNKEN, anchor=tk.W, bg="#444444", fg="#ffffff", font=font_style)
        self.status_label.pack(fill=tk.X, side=tk.BOTTOM, pady=5)

        tk.Button(self.root, text="Baixar", command=self.download_video, bg="#28a745", fg="#ffffff", font=font_style).pack(pady=10)

    def choose_destination_folder(self):
        folder_path = filedialog.askdirectory()
        if folder_path:
            self.destination_folder.set(folder_path)
            self.save_destination(folder_path)

    def download_video(self):
        if not self.video_link.get():
            messagebox.showwarning("Aviso", "Por favor, insira um link válido.")
            return

        try:
            yt = YouTube(self.video_link.get())
            if self.download_type.get() == "video":
                stream = yt.streams.get_highest_resolution()
            else:
                stream = yt.streams.filter(only_audio=True).first()
        except Exception as e:
            messagebox.showerror("Erro", f"Erro ao obter o vídeo: {str(e)}")
            return

        extension = "mp4" if self.download_type.get() == "video" else "mp3"
        destination_path = os.path.join(self.destination_folder.get(), yt.title + f".{extension}")

        self.progress_bar.config(text="Downloading...")
        self.status_label.config(text=f"Tamanho do Arquivo: {stream.filesize / (1024 * 1024):.2f} MB")

        def download():
            stream.download(output_path=self.destination_folder.get(), filename=yt.title)
            self.progress_bar.config(text="Download Concluído")
            self.status_label.config(text=f"Arquivo salvo em: {destination_path}")

            start = self.start_time.get()
            end = self.end_time.get()
            if start and end:
                start = int(start)
                end = int(end)
                if self.download_type.get() == "video":
                    self.progress_bar.config(text="Cortando o vídeo...")
                    clip = VideoFileClip(destination_path)
                    clip = clip.subclip(start, end)
                    clip.write_videofile(os.path.join(self.destination_folder.get(), yt.title + "_cortado.mp4"), codec="libx264")
                    self.progress_bar.config(text="Corte Concluído")
                    self.status_label.config(text=f"Vídeo cortado salvo em: {os.path.join(self.destination_folder.get(), yt.title + '_cortado.mp4')}")
                else:
                    self.progress_bar.config(text="Cortando o áudio...")
                    clip = AudioFileClip(destination_path)
                    clip = clip.subclip(start, end)
                    clip.write_audiofile(os.path.join(self.destination_folder.get(), yt.title + "_cortado.mp3"))
                    self.progress_bar.config(text="Corte Concluído")
                    self.status_label.config(text=f"Áudio cortado salvo em: {os.path.join(self.destination_folder.get(), yt.title + '_cortado.mp3')}")

        download_thread = Thread(target=download)
        download_thread.start()

    def save_destination(self, folder_path):
        with open("destination.txt", "w") as f:
            f.write(folder_path)

    def get_saved_destination(self):
        if os.path.exists("destination.txt"):
            with open("destination.txt", "r") as f:
                return f.read().strip()
        else:
            return os.path.expanduser("~")

if __name__ == "__main__":
    root = tk.Tk()
    app = YouTubeDownloaderApp(root)
    root.mainloop()
