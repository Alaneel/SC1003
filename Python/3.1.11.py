m = int(input("Enter the lower bound of range: "))
n = int(input("Enter the upper bound of range: "))

while m != '#' and n != '#':
    
    for i in range(m, n+1):
        if i == 1:
            print("1 is not a prime number")
            continue
        for j in range(2, int(i/2)+1):
            if i % j == 0:
                print("%d is not a prime number" % i)
                break
        else:
            print("%d is a prime number" % i)

    m = int(input("Enter the lower bound of range: "))
    n = int(input("Enter the upper bound of range: "))