import random

WIDTH = 4
numList = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9]

def genNumbers(numList, count):
    random.shuffle(numList) # important method!
    return numList[:count]

def userGuess():
    inputStr = input('Please input 4 digits: ')
    while inputStr.isdigit() == False or len(input) != WIDTH:
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
                    bull += 1
                else:
                    cows += 1
    return (bulls, cows)

