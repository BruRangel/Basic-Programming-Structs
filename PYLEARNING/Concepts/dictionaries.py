# dictionary = a changeable, unordered collection of unique key:value pairs
#              Fast because they use hashes, allow us to access a value quickly

capitals = {'USA':'Washington DC',
            'India':'New Dehli',
            'China':'Beijing',
            'Russia':'Moscow'}

print(capitals['USA'])

capitals.update({'Germany':'Berlin'})   # includes a new key,value
capitals.update({'USA':'Las Vegas'})    # uptades an existing key,value
# capitals.pop('China')                 # removes a key,value
# capitals.clear()                      # clear the dictionary

print(capitals['USA'])
print(capitals.get('Brazil'))   # safer way to look for an element on a dictionary
print(capitals.keys())          # prints only the keys
print(capitals.values())        # prints only the values
print(capitals.items())         # prints the whole dictionary

print("The dictionary is:", end=" ")
for i, j in capitals.items():  # another way to print the whole dictionary using loops
    print(f"Country: {i}, Capital: {j}", end=". ")
