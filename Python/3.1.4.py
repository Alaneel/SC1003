total = 0.0
count= 0
item = float(input("Enter value: "))
while item != -1:
    total += item
    count += 1
    item = float(input("Enter value: "))
else:
    print(count, "numbers read.", "Total=", total)