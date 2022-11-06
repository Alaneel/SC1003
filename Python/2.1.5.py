mark = float(input("What is your mark? "))

if mark >= 60:
    if mark >= 70:
        if mark >= 80:
            if mark >= 90:
                print("Congratulations! You received an A")
            else:
                print("You received a B")
        else:
            print("You received a C")
    else:
        print("You received a D")
else:
    print("Oops, not good. Wish you can be better next time")