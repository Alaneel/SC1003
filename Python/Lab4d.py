from sense_hat import SenseHat
import time
import random

sense = SenseHat()

def set_image(b, y):

    image = [
    b, b, b, b, b, b, b, b,
    b, b, b, y, b, b, b, b,
    b, b, y, y, y, b, b, b,
    b, y, b, y, b, y, b, b,
    b, b, b, y, b, b, b, b,
    b, b, b, b, y, b, b, b,
    b, b, b, y, b, b, b, b,
    b, b, b, b, b, b, b, b,
    ]

    return image

orientations = [0, 90, 180, 270]

correspondance = {0: (-1, 0), 90: (0, -1), 180: (1, 0), 270: (0, 1)}

while True:

    b = (0, 0, 0)
    y = (0, 255, 0)

    image_pixels = set_image(b, y)

    ori1 = orientations[random.randint(0, 3)]
    sense.set_rotation(ori1)

    sense.set_pixels(image_pixels)

    time.sleep(1)

    acceleration = sense.get_accelerometer_raw()
    acc_x = round(acceleration['x'])
    acc_y = round(acceleration['y'])
    
    if (acc_x, acc_y) != correspondance[ori1]:
        y = (255, 0, 0)

        image_pixels = set_image(b, y)

        sense.set_rotation(ori1)

        sense.set_pixels(image_pixels)

    time.sleep(1)
    sense.clear()