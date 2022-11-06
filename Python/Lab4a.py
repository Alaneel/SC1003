from sense_hat import SenseHat
import time
import random

sense = SenseHat()

while True:
    sense.set_pixel(random.randint(0, 7), random.randint(0, 7), (random.randint(0, 255), random.randint(0, 255), random.randint(0, 255)))
    sense.set_pixel(random.randint(0, 7), random.randint(0, 7), (random.randint(0, 255), random.randint(0, 255), random.randint(0, 255)))
    sense.set_pixel(random.randint(0, 7), random.randint(0, 7), (random.randint(0, 255), random.randint(0, 255), random.randint(0, 255)))
    sense.set_pixel(random.randint(0, 7), random.randint(0, 7), (random.randint(0, 255), random.randint(0, 255), random.randint(0, 255)))
    time.sleep(1)
    sense.clear()