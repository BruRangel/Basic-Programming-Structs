# index operator [] = gives access to a sequence's element (str, list, tuples)

name = "bruno rangel"

# if name[0].islower():
    # name = name.capitalize()

# print(name)

first_name = name[:5]
last_name = name[6:]

first_name = first_name.capitalize()
last_name = last_name.capitalize()
full_name = first_name + " " + last_name

print("Full name:", full_name)
print("Last character:", full_name[-1])
