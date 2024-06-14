import random

x = random.randint(1, 6)
y = random.random()
z = random.randint(random.randint(-1000, 0), random.randint(0, 1000))

mylist = ['a', 'b', 'c']
cards = ['A', 2, 3, 4, 5, 6, 7, 'Queen', 'Jack', 'King']

print("x:", x)
print("y:", y)
print("z:", z)
print("sorted item:", random.choice(mylist))
print("shuffled deck:", random.shuffle(cards))
