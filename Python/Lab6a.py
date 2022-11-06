from sense_hat import SenseHat
import time

sense = SenseHat()

while True:
    pitch = sense.get_orientation()['pitch']
    roll = sense.get_orientation()['roll']
    print('pitch {0} and roll {1}'.format(round(pitch, 0), round(roll, 0)))
    time.sleep(0.05)