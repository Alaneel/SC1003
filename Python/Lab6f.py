from sense_hat import SenseHat
import time
import random

sense = SenseHat()

b = (0, 0, 0)
w = (255, 255, 255)
r = (255, 0, 0)
g = (0, 255, 0)

board = [
    [r, r, r, b, b, b, b, r],
    [r, b, b, b, b, b, b, r],
    [b, b, b, b, g, r, b, r],
    [b, r, r, b, r, r, b, r],
    [b, b, b, b, b, b, b, b],
    [b, r, b, r, r, b, b, b],
    [b, b, b, r, b, b, b, r],
    [r, r, b, b, b, r, r, r],
]

y = 2 # y coordinate of marble
x = 2 # x coordinate of marble
board[y][x] = w # a white marble

def check_wall(x, y, new_x, new_y):
    if board[new_y][new_x] != r:
        return new_x, new_y
    elif board[new_y][x] != r:
        return x, new_y
    elif board[y][new_x] != r:
        return new_x, y
    else:
        return x, y

def move_marble(pitch, roll, x, y):
    new_x = x
    new_y = y
    if 1 < pitch < 179 and x != 0:
        new_x -= 1 # move left
    elif 359 > pitch > 179 and x != 7:
        new_x += 1 # move right
    
    if 1 < roll < 179 and y != 7:
        new_y += 1 # move up
    elif 359 > roll > 179 and y != 0:
        new_y -= 1 # move down
    
    new_x, new_y = check_wall(x, y, new_x, new_y)
    return new_x, new_y

def change_target(list_2d, time):
    if int((time * 100) % 1000) == 0:
        for i in range(len(list_2d)):
            for j in range(len(list_2d[i])):
                if list_2d[i][j] == g:
                    list_2d[i][j] = b
        while True:
            rand_y = random.randint(0, 7)
            rand_x = random.randint(0, 7)
            if list_2d[rand_y][rand_x] == b:
                list_2d[rand_y][rand_x] = g
                print(list_2d)
                break
        return list_2d
    else:
        return list_2d

game_over = False
game_time = 0

while not game_over:
    board = change_target(board, game_time)

    pitch = sense.get_orientation()['pitch']
    roll = sense.get_orientation()['roll']
    board[y][x] = b
    x, y = move_marble(pitch, roll, x, y)
    coord_g = sum(board,[]).index(g)
    board[y][x] = w
    sense.clear()
    sense.set_pixels(sum(board, []))

    if sum(board,[]).index(board[y][x]) == coord_g:
        game_over = True
        break

    time.sleep(0.05)
    game_time += 0.05

sense.show_message('yay!!')