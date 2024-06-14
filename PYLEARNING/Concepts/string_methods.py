name = "bruno"

print("Name is:", name)
print("Length:", len(name))
print("Letter B is in position:", name.find("b"))
print("Name capitalized:", name.capitalize())
print("Name uppercased:", name.upper())
print("Name lowercased:", name.lower())
print("Is name a digit?", name.isdigit())
print("Is name only alphabetical characters?", name.isalpha())   # if there's a space in the name, it'll return false
print("""Amount of "b" characters in the string:""", name.count("b"))
print("Name replacing b for a:", name.replace("b", "a"))
print("Name * 3:", name*3)
