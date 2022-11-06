width = int(input("Please enter pattern width: "))

for i in range(1, width + 1):
    for j in range(1, i+1):
        print('*', end='')
    print()
    
for i in range(width-1, 0, -1):
    for j in range(1, i+1):
        print('*', end='')
    print()