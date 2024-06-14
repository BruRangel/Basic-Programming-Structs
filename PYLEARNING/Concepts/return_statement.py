# return statement = functions send python values/objects back to the caller.
#                    these values/objects are known as the function's return value.

def multiply(num1, num2):
    result = num1 * num2
    return result


x = 2
y = 4

z = multiply(x, y)  # this is the value returned
print(z)
