# lists = used to store multiple items in a single variable

food = ["pizza", "hamburger", "hotdog", "spaghetti", "pudding"]

food[0] = "sushi"   # replaces the element on the position 0 for sushi

food.append("ice cream")    # adds ice cream on the final of the list
food.remove("hotdog")       # removes the element hotdog from the list
food.pop()                  # removes the last element of the list
food.insert(0, "cake")      # insert cake on the position 0, making sushi go to position 1
food.sort()                 # sort the elements of the list
#food.clear()               # clear all the elements from the list

for i in food:
    print(i)
