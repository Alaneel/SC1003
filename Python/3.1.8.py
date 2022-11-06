n = int(input("Enter a positive integer: "))
count = 0

for i in range(2, int(n/2)+1): # It is not possible for any number larger than k/2 to divide evenly into k
    if n % i == 0:
        print("%d is not a prime" % n) # Exit loop for composites
        count += 1
        break
else:   
    print("%d is a prime" % n) # Loop not exited so it is a prime