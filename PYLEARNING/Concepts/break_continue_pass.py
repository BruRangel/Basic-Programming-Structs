# Loop Control Statements = change a loops execution from its normal sequence

# break =       used to terminate the loop entirely
# continue =    skips to the next iteration of the loop
# pass =        does nothing, acts as a placeholder

while True:
    name = input("Enter your name: ")
    if name != "":
        break
print(f"Your name is {name}")

print("\n----------------------------------\n") # display a line in terminal

phone_number = "+55 11 98774-0048"

for i in phone_number:
    if i == "+":
        continue
    if i == "-":
        continue
    if i == " ":
        continue
    print(i, end="")

print("\n----------------------------------\n") # display a line in terminal

for i in range(1, 11):
    if i == 9:
        pass
    else:
        print(i, end=" ")
