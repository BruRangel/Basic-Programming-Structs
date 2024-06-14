# scope = the region that a variable is recognized
#         a variable is only avaiable from inside the region it is created
#         a global and locally scoped versions of a variable can be created

name = "Bruno Rangel"   # global scope


def display_name():
    name = "Bruno"  # local scope
    print(name)


print(name)
