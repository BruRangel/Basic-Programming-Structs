# set = collection which is unordered, unindexed. No duplicate values.
#       sets are like conjuncts in math

A = {1, 2, 3, 4}   # in a set, duplicate values becomes one
B = {2, 4, 6, 8}

# A.add(5)
# A.remove(4)
# A.clear()
# A.update(B)

print("Complement of A in B:", A.difference(B))
print("Complement of B in A:", B.difference(A))
print("Intersection of A and B:", A.intersection(B))

C = A.union(B)

print("C = Union of A and B:", end=" ")
for i in C:
    print(i, end=", ")
