age = int(input("How old are you? "))

if age > 100:
    print("Oak Tree")
elif age >= 18:
    print("Adult")
elif 18 > age >= 0:
    print("Minor")
elif age < 0:
    print("Not born")
