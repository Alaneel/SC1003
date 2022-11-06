import random

Number = random.randint(0, 100)
print("Hi-Lo Number Guessing Game: between 0 and 100 inclusive.")
guess = int(input("Guess a number: "))
while 0 <= guess <= 100:
    if guess > Number:
        print("Guessed Too High")
    elif guess < Number:
        print("Guessed Too Low")
    else: # correct guess, exit with break
        print("You guessed it. The number was", Number)
        break
    # keep going, get the next guess
    guess = int(input("Guess a number: "))
else:
    print("A pity. You quit the game early, the number was", Number)