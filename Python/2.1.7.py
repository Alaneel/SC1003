# usr/bin/env python3
# -*- coding: utf-8 -*-
# Time: 09/08/2022
# Author: Alan Wang
# File: 2.1.7.py
# Software: Visual Studio Code

horizonDistA = (int)(input("Read horizonDistA in meters: "))
vertDistA = (int)(input("Read verDistA in meters: "))

distA = horizonDistA + vertDistA
print("Dist from home to A is:", distA, 'm')

horizonDistB = (int)(input("Read horizonDistB in meters: "))
vertDistB = (int)(input("Read verDistB in meters: "))

distB = horizonDistB + vertDistB
print("Dist from home to B is:", distB, 'm')

if distA <= distB:
    if distA < 3000:
        print("You are suggested to ride a e-scooter to location A")
    else:
        print("You are suggested to take a taxi to location A")
elif distB < 3000:
    print("You are suggested to ride a e-scooter to location B")
else:
    print("You are suggested to take a taxi to location B")

print("Than you for using this application!")