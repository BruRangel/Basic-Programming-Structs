# nested loops = inner loops

rows = int(input("Number of rows: "))
columns = int(input("Number of columns: "))
symbol = input("Symbol: ")

for row in range(rows):
    for column in range(columns):
        print(symbol, end="")
    print()
