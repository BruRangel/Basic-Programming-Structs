# exception = events detected during execution that interrupt the flow of a program

try:
    numerator = float(input("Enter the numerator: "))
    denominator = float(input("Enter the denominator: "))
    result = numerator/denominator
    print(result)
except ZeroDivisionError:
    print("You can't divide by zero.")
except ValueError:
    print("Please input a valid number.")
