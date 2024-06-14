# tuple = collection which is ordered and unchangeable
#          used to group related data

student = (str(input("First name: ")), int(input("Age: ")), str(input("Gender: ")))
print(student)
print(student.count("Bruno"))
print(student.index(18))

for i in student:
    print(i, end=", ")

print("")

if "Bruno" in student:
    print("I'm here.")
