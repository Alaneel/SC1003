import random

# Generate a 4-digit number where all four digits are different

WIDTH = 4
numbers = '1234567890'
target_list = []

while len(target_list) != WIDTH:
    i = random.randint(0, 9)
    if numbers[i] not in target_list:
        target_list.append(numbers[i])

target = ''.join(target_list)

STATUS = False
Attempts = 0
while STATUS == False:
    A, B = 0, 0
    guess = input('Please input %d digits:  ' % WIDTH)

    while guess.isdigit() == False or len(guess) != WIDTH:
        guess = input('Wrong format!! Please input %d digits: ' % WIDTH)

    for j in guess:
        if j in target:
            if guess.index(j) == target.index(j):
                A += 1
            else:
                B += 1
                    
    Attempts += 1
    if A == WIDTH:
        STATUS = True
        print('You Win!!')
        print('Attempts: ', Attempts)
    else:
        print(A, 'A', '(Bulls)', B, 'B', '(Cows)')
