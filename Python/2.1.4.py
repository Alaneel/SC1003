mark = float(input("What is your mark? "))

if 90 <= mark <= 100:
    print("Congratulations! You received an A!")
elif 80 <= mark < 90:
    print("You received a B")
elif 70 <= mark < 80:
    print("You received a C")
elif 60 <= mark < 70:
    print("You received a D")
else:
    print("Oops, not good. Wish you can be better next time")