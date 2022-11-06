a = float(input("Enter a value for a: "))
b = float(input("Enter a value for b: "))
c = float(input("Enter a value for c: "))

if a >= b:
    if a >= c:
        print("Maximum value is %f" % a)
    else:
        print("Maximum value is %f" % c)
else:
    if b >= c:
        print("Maximum value is %f" % b)
    else:
        print("Maximum value is %f" % c)