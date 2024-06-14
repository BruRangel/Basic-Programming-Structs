# logical operators (and, or, not) = used to check if two or more conditional statments are true

temp = int(input("What's the temperature outside? "))

if temp >= 16 and temp <= 30:
    print("The temperature is good today!")
else:
    print("Not good!")
if temp == 100 or temp == -100:
    print("Wtf???????")

# /-------------------------------------------------/

x = int(input("Type num: "))
if not(x >= 10):
    print("Less than 10")
else:
    print("Equals or bigger than ten")
