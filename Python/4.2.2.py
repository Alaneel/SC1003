value = 1
print("before ", value, end=', ')

while value <= 3:
    value += 1
    if value == 2:
        break
    print("while", value, end=', ')
else:
    print("else", value, end=', ')

print("after ", value, end=', ')