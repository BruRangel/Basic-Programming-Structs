# **kwargs = parameter that will pack all arguments into a dictionary
#            useful so that a function can accept a varying amount of keyword arguments

def hello(**kwargs):
    print("Hello", end=" ")
    for i,j in kwargs.items():
        print(j, end=" ")


hello(first="Bruno", middle1="Rangel", middle2="Pereira", last="Tadim")
