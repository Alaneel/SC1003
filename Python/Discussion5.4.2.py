import random

WIDTH = 4
numList = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9]

def genNumbers(numList, count):
    random.shuffle(numList) # important method!
    return numList[:count]

def userGuess():
    inputStr = input('Please input 4 digits: ')
    while inputStr.isdigit() == False or len(inputStr) != WIDTH:
        inputStr = input('Wrong format!! Please input 4 digits: ')
    
    guess = []

    for i in range(WIDTH):
        num = int(inputStr[i])
        guess.append(num)

    return guess

def checkGuess(guessList, answerList):
    bulls = 0
    cows = 0
    
    for i in range(len(guessList)):
        for j in range(len(answerList)):
            if guessList[i] == answerList[j]:
                if i == j:
                    bulls += 1
                else:
                    cows += 1
    return (bulls, cows)

answer = genNumbers(numList, WIDTH)

attempts = 0

while True:
    guesses = userGuess()
    attempts += 1

    result = checkGuess(guesses, answer)

    if result[0] == WIDTH:
        print('You Win!!')
        print('Attempts: ', attempts)
        break
    else:
        print(result[0], 'A (Bulls)', result[1], 'B (Cows)')