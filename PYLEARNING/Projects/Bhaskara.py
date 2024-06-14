import math

while True:
    a = float(input("Enter the value of a: "))
    b = float(input("Enter the value of b: "))
    c = float(input("Enter the value of c: "))
    delta = (b**2 - 4*a*c)

    if a != 0 and delta >= 0:
        break
    else:
        if a == 0:
            print("a cannot be equal 0")
        if delta < 0:
            print("delta cannot be less than 0")

x1 = (-b + math.sqrt(delta))/2*a
x2 = (-b - math.sqrt(delta))/2*a

print(f"x1 = {x1} and x2 = {x2}")
