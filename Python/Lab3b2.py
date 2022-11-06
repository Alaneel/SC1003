# Practical Exercise 3b

from sense_hat import SenseHat
sense = SenseHat()
sense.set_rotation(180)

def get_color(color, task):
    counter = 0
    Pass = False
    while Pass == False:
        try:
            status = False
            while status == False:
                if counter == 3:
                    raise KeyError
                color_str = input('Enter the value of the %s color for %s: ' % (color, task))
                if color_str.isdigit() == False:
                    raise TypeError
                if int(color_str) < 0 or int(color_str) > 255:
                    raise ValueError 
                temp_color_int = int(color_str)
                status = True
            Pass = True
            return temp_color_int

        except TypeError:
            counter += 1
            print('Invalid - use number only ( %d )' % counter)
            continue
        
        except ValueError:
            counter += 1
            print('Invalid - value has to be between 0 and 255 ( %d )' % counter)
            continue

def get_speed():
    numbers = '1234567890.'
    counter = 0
    Pass = False
    while Pass == False:
        try:
            status = False
            while status == False:
                if counter == 3:
                    raise KeyError
                speed_str = input('Enter the value for speed: ')
                for i in speed_str:
                    if i in numbers == False:
                        raise TypeError
                if float(speed_str) < 0 or float(speed_str) > 1:
                    raise ValueError 
                temp_speed_int = float(speed_str)
                status = True
            Pass = True
            return temp_speed_int

        except TypeError:
            counter += 1
            print('Invalid - use number only ( %d )' % counter)
            continue
        
        except ValueError:
            counter += 1
            print('Invalid - value has to be between 0 and 1 ( %d )' % counter)
            continue
        
try:
    msg_r_int = get_color('red', 'message')
    msg_g_int = get_color('green', 'message')
    msg_b_int = get_color('blue', 'message')
    msg_color = (msg_r_int, msg_g_int, msg_b_int)

    bg_r_int = get_color('red', 'background')
    bg_g_int = get_color('green', 'background')
    bg_b_int = get_color('blue', 'background')
    bg_color = (bg_r_int, bg_g_int, bg_b_int)

    speed = get_speed()

    sense.show_message("I got it!", text_colour = msg_color, back_colour = bg_color, scroll_speed = speed)

except KeyError:
    print('You have exceeded the number of trials allowed. Bye!')