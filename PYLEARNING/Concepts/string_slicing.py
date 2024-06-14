# slicing = create a substring by extracting elements from another string
#           indexing[] or slice()
#           [start:stop:step]

name = "Bruno Rangel"
first_name = name[:5]
last_name = name[6:]
step2_name = name[::2]
reversed_name = name[::-1]

print(first_name)
print(last_name)
print(step2_name)
print(reversed_name)

website = "http://google.com"
slice = slice(7, -4)
print(website[slice])
