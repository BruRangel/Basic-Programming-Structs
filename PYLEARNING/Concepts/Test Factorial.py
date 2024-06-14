def fac_function(factoring):
    factorial = 1
    for i in range(factorial, factoring+1):
        factorial = factorial*i
    print(f"{factoring}! = {factorial}")


x = int(input("Enter the number to be factored: "))
fac_function(x)
