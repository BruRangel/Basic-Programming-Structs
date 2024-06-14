# keyword arguments = arguments preceded by an identifier when we pass them to a function
#                     the order of the arguments doesn't matter, unlike positional arguments
#                     python knows the names of the arguments that our function receives


def hello(first, middle, last):
    print(f"Hello {first} {middle} {last}")


# positional arguments example
hello("Bruno", "Rangel", "Tadim")

# keyword arguments example
hello(last="Tadim", first="Bruno", middle="Rangel")
