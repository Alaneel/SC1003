import math

radiusString = input("Enter the radius of your circle: ")
radiusFloat = float(radiusString)
if radiusFloat > 0:
    circumference = 2 * math.pi * radiusFloat
    area = math.pi * radiusFloat * radiusFloat

    print("The circumference of your circle is:", circumference, ", and the area is:", area)
else:
    print("Radius must be positive!")
    print("Please try again!")