width = int(input("Please enter pattern width: "))

for i in range(1, 2 * width):
    if i < width:
        count = i
    else:
        count = width * 2 - i
    print('*' * count)

