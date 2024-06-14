name = str(input("What's your name? "))
x = float(input("Type a number: "))

print(f"Hello, {name}")
print(f"The number is {x}")

# type displays the classes of the variables
print(type(name))
print(type(x))

# string sum
first_name = "Bruno"
last_name = "Tadim"
full_name = first_name + " " + last_name
print(full_name)

# int sum
y = 1
y += 1
# typecasting
print("The number is: "+str(y))

# multiple assignment
a, b, c = "Bruno", 18, True

d = e = f = 30
