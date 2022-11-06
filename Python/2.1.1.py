horizon_dist = (int)(input("Read horizonDist: "))
vertical_dist = (int)(input("Read vertDist: "))
travel_dist = horizon_dist + vertical_dist
print("Distance from A to B is:", travel_dist, "m")
if travel_dist > 3000:
    print("You are suggested to book a taxi")
print("Thank you for using this application")