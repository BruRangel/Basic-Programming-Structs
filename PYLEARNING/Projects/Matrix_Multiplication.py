while True:
    m1_rows = int(input("Enter the number of rows (m1): "))
    m1_columns = int(input("Enter the number of columns (m1): "))
    m2_rows = int(input("Enter the number of rows (m1): "))
    m2_columns = int(input("Enter the number of columns (m1): "))

    if m1_columns == m2_rows:
        break
    else:
        print("Cannot make the multiplication, value of m1 columns and m2 rows are different!")

m1 = int

print("Values for m1: ")
for i in range(m1_rows):
    for j in range(m1_columns):
        m1[i][j] = (f"Enter the value of a{i}{j}")

