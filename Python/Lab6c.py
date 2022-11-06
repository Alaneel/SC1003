from sense_hat import SenseHat
import time

sense = SenseHat()

b = (0, 0, 0)
w = (255, 255, 255)

board = [
    [b, b, b, b, b, b, b, b],
    [b, b, b, b, b, b, b, b],
    [b, b, b, b, b, b, b, b],
    [b, b, b, b, b, b, b, b],
    [b, b, b, b, b, b, b, b],
    [b, b, b, b, b, b, b, b],
    [b, b, b, b, b, b, b, b],
    [b, b, b, b, b, b, b, b],
]

y = 2 # y coordinate of marble
x = 2 # x coordinate of marble
board[y][x] = w # a white marble

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
    
    return new_x, new_y

while True:
    pitch = sense.get_orientation()['pitch']
    roll = sense.get_orientation()['roll']
    board[y][x] = b
    x, y = move_marble(pitch, roll, x, y)
    board[y][x] = w
    sense.clear()
    sense.set_pixels(sum(board, []))
    time.sleep(0.05)