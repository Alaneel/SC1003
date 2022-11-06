m = int(input("Enter a number between 1 to 9: "))
n = int(input("Enter a number between 1 to 9: "))

for x in range(1, m+1):
    for y in range(1, n+1):
        print(x, 'x', y, '=', x * y, end='\t')
    print()