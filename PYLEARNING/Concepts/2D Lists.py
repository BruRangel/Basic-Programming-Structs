# 2D Lists = a list of lists

drinks = ["heineken", "tequila", "vodka"]
dinner = ["cup noodles", "taco", "lasagna"]
dessert = ["cake", "ice cream"]

food = [drinks, dinner, dessert]

for i in food:
    for j in dessert:
        if j == "cake":
            dessert.remove(j)

    if i == dinner:
        continue

    print(i, end=" ")

print("\n ------------------------------------ \n")

print(food[0][2])
