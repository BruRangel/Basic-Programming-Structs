import os
import tkinter as tk
from tkinter import filedialog, messagebox
from pytube import YouTube
from threading import Thread

class YouTubeDownloaderApp:
    def __init__(self, root):
        self.root = root
        self.root.title("YouTube Downloader")
        self.root.geometry("400x200")

        # Variáveis
        self.video_link = tk.StringVar()
        self.destination_folder = tk.StringVar()
        self.destination_folder.set(self.get_saved_destination())

        # Campos de entrada
        tk.Label(self.root, text="Link do Vídeo:").pack()
        self.link_entry = tk.Entry(self.root, textvariable=self.video_link, width=50)
        self.link_entry.pack()

        tk.Button(self.root, text="Escolher Pasta de Destino", command=self.choose_destination_folder).pack()

        self.progress_bar = tk.Label(self.root, text="", bd=1, relief=tk.SUNKEN, anchor=tk.W)
        self.progress_bar.pack(fill=tk.X, side=tk.BOTTOM)

        self.status_label = tk.Label(self.root, text="", bd=1, relief=tk.SUNKEN, anchor=tk.W)
        self.status_label.pack(fill=tk.X, side=tk.BOTTOM)

        tk.Button(self.root, text="Baixar", command=self.download_video).pack()

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
            video = yt.streams.get_highest_resolution()
        except Exception as e:
            messagebox.showerror("Erro", f"Erro ao obter o vídeo: {str(e)}")
            return

        destination_path = os.path.join(self.destination_folder.get(), yt.title + ".mp4")

        self.progress_bar.config(text="Downloading...")
        self.status_label.config(text=f"Tamanho do Vídeo: {video.filesize / (1024 * 1024):.2f} MB")

        def download():
            video.download(output_path=self.destination_folder.get())
            self.progress_bar.config(text="Download Concluído")
            self.status_label.config(text=f"Vídeo salvo em: {destination_path}")

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