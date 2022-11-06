N = int(input("How many coffee shops: "))
while N < 1 or N > 10:
    print("warning: input value should range from 1 to 10")
    N = int(input("How many coffee shops: "))
count = 1
while count <= N:
    print("input information of coffee shop", count)
    horizonDist = int(input("Read horizonDist in meters: "))
    vertDist = int(input("Read vertDist in meters: "))
    dist = horizonDist + vertDist
    print("dist from home to coffee shop", count, "is", dist, "m")
    count += 1
print("Thank you for using this application")
