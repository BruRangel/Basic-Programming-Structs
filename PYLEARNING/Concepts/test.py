gols_x = 0
gols_y = 0
tempo = 0


def placar():
    print(f"vasco: {gols_x} vs botafogo: {gols_y}")


def lance():
    global gols_x, gols_y, tempo
    acontecimento = str(input("Algum time fez gol (s/n)? "))
    if (acontecimento == "s"):
        time = str(input("Qual time (vasco/botafogo)? "))
        if (time == "vasco"):
            gols_x += 1
        elif (time == "botafogo"):
            gols_y += 1
    placar()
    tempo += 10
    print(f"Tempo de partida: {tempo}")


while tempo < 90:
    lance()
