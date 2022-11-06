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

while True:

    b = (0, 0, 0)
    y = (255, 0, 0)

    image_pixels = set_image(b, y)
    sense.set_rotation(90)
    sense.set_pixels(image_pixels)

    time.sleep(1)
    sense.clear()

    y = (0, 0, 255)

    image_pixels = set_image(b, y)
    sense.set_rotation(180)
    sense.set_pixels(image_pixels)

    time.sleep(1)
    sense.clear()

    y = (255, 0, 0)

    image_pixels = set_image(b, y)
    sense.set_rotation(270)
    sense.set_pixels(image_pixels)


    time.sleep(1)
    sense.clear()

    y = (0, 0, 255)

    image_pixels = set_image(b, y)
    sense.set_rotation(0)
    sense.set_pixels(image_pixels)
    
    time.sleep(1)
    sense.clear()