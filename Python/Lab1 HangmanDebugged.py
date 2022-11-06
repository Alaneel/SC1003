# usr/bin/env python3
# Coding: -*- utf-8 -*-
# Time: 09/08/2022
# Modified by: WANG YANGMING
# File: HangmanDebugged.py
# Software: Visual Studio Code

# Python3 Hangman Game

# Add "random" and "sleep" function into the program
import random
from time import sleep

# Define how to output the hang man figure
HANGMAN = (
"""
 ------
 |    |
 |
 |
 |
 |
 |
 |
 |
----------
""",
"""
 ------
 |    |
 |    O
 |
 |
 |
 |
 |
 |
----------
""",
"""
 ------
 |    |
 |    O
 |   -+-
 | 
 |   
 |   
 |   
 |   
----------
""",
"""
 ------
 |    |
 |    O
 |  /-+-
 |   
 |   
 |   
 |   
 |   
----------
""",
"""
 ------
 |    |
 |    O
 |  /-+-/
 |   
 |   
 |   
 |   
 |   
----------
""",
"""
 ------
 |    |
 |    O
 |  /-+-/
 |    |
 |   
 |   
 |   
 |   
----------
""",
"""
 ------
 |    |
 |    O
 |  /-+-/
 |    |
 |    |
 |   | 
 |   | 
 |   
----------
""",
"""
 ------
 |    |
 |    O
 |  /-+-/
 |    |
 |    |
 |   | |
 |   | |
 |  
----------
""")

WORDS = ("CODE", "ARTIFICIAL")
word = random.choice(WORDS)
POSITIVE_SAYINGS = ("Well done!", "Awesome!", "You Legend!")

# Ensure all the pictures will be shown before losing the game
MAX_WRONG = 7
so_far = ("-") * len(word)
used = []
wrong = 0 # I think there's no need for another counter besides this wrong

print("\t \t Welcome to Hangman!")
print()
input("Press Enter to START: ")

# main guessing portion
while wrong < MAX_WRONG and so_far != word:
    
    print()
    print(HANGMAN[wrong])
    print("Word so far: ", so_far)
    print("Letters used: ", used)

    guess = input("Guess a letter: ").upper()
    sleep(1) # Time delay - allows userfriendly reading
    print()

    while guess in used:
        print("Try again... You've already used this letter")
        guess = input("Guess a letter: ").upper()
        sleep(1)
        print()
    used.append(guess)

    if guess in word:
        print(random.choice(POSITIVE_SAYINGS),"...Updating word so far...")

        new = ""
        for i in range(len(word)):
            if guess == word[i]:
                new += guess

            else:
                new += so_far[i]
        so_far = new 

    else:
        print("INCORRECT! Try again!")
        wrong += 1

# End of game, nexr few lines of codes will print game result and quit game
if wrong == MAX_WRONG:
    print("Calculating result...")
    # Ensure the last picture can be printed
    print(HANGMAN[wrong])
    sleep(1)
    print("UNLUCKY! Better luck next time! The correct word should be : %s" % word)

else:
    print("Calculating result...")
    sleep(1)
    print("WINNER! Congratulations! You got the correct word : %d" % word)

print()
print()
input("Press Enter to Leave: ")
