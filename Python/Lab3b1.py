# Practical Exercise 3b

from sense_hat import SenseHat
sense = SenseHat()
sense.set_rotation(180)

def msg_check_color(color):
    color_str = input("Enter the value of the %s color for message: " % color)
    if color_str.isdigit() == False:
        raise TypeError
    if int(color_str) < 0 or int(color_str) > 255:
        raise ValueError
            
    return int(color_str)

def set_msg_color():
    counter = 0
    Pass = False
    while Pass == False:
        try:
            status = False
            while status == False:
                if counter == 3:
                    return
                msg_r_int = msg_check_color('red')
                status = True
            Pass = True

        except TypeError:
            counter += 1
            print('Invalid - use number only ( %d )' % counter)
            continue
        
        except ValueError:
            counter += 1
            print('Invalid - value has to be between 0 and 255 ( %d )' % counter)
            continue
    
    counter = 0
    Pass = False
    while Pass == False:
        try:
            status = False
            while status == False:
                if counter == 3:
                    return
                msg_g_int = msg_check_color('green')
                status = True
            Pass = True

        except TypeError:
            counter += 1
            print('Invalid - use number only ( %d )' % counter)
            continue
        
        except ValueError:
            counter += 1
            print('Invalid - value has to be between 0 and 255 ( %d )' % counter)
            continue
        
    counter = 0
    Pass = False
    while Pass == False:
        try:
            status = False
            while status == False:
                if counter == 3:
                    return
                msg_b_int = msg_check_color('blue')
                status = True
            Pass = True

        except TypeError:
            counter += 1
            print('Invalid - use number only ( %d )' % counter)
            continue
        
        except ValueError:
            counter += 1
            print('Invalid - value has to be between 0 and 255 ( %d )' % counter)
            continue
                
    msg_color = (msg_r_int, msg_g_int, msg_b_int)
    return msg_color

def bg_check_color(color):
    color_str = input("Enter the value of the %s color for background: " % color)
    if color_str.isdigit() == False:
        raise TypeError
    if int(color_str) < 0 or int(color_str) > 255:
        raise ValueError
            
    return int(color_str)

def set_bg_color():
    counter = 0
    Pass = False
    while Pass == False:
        try:
            status = False
            while status == False:
                if counter == 3:
                    return
                bg_r_int = bg_check_color('red')
                status = True
            Pass = True

        except TypeError:
            counter += 1
            print('Invalid - use number only ( %d )' % counter)
            continue
        
        except ValueError:
            counter += 1
            print('Invalid - value has to be between 0 and 255 ( %d )' % counter)
            continue
    
    counter = 0
    Pass = False
    while Pass == False:
        try:
            status = False
            while status == False:
                if counter == 3:
                    return
                bg_g_int = bg_check_color('green')
                status = True
            Pass = True

        except TypeError:
            counter += 1
            print('Invalid - use number only ( %d )' % counter)
            continue
        
        except ValueError:
            counter += 1
            print('Invalid - value has to be between 0 and 255 ( %d )' % counter)
            continue
        
    counter = 0
    Pass = False
    while Pass == False:
        try:
            status = False
            while status == False:
                if counter == 3:
                    return
                bg_b_int = bg_check_color('blue')
                status = True
            Pass = True

        except TypeError:
            counter += 1
            print('Invalid - use number only ( %d )' % counter)
            continue
        
        except ValueError:
            counter += 1
            print('Invalid - value has to be between 0 and 255 ( %d )' % counter)
            continue
                
    bg_color = (bg_r_int, bg_g_int, bg_b_int)
    return bg_color

def check_speed():
    numbers = '1234567890.'
    speed_str = input("Enter the value of the display speed: ")
    for i in speed_str:
        if i in numbers == False:
            raise TypeError
    if float(speed_str) < 0 or float(speed_str) > 1:
        raise ValueError
            
    return float(speed_str)

def set_speed():
    counter = 0
    Pass = False
    while Pass == False:
        try:
            status = False
            while status == False:
                if counter == 3:
                    return
                speed = check_speed()
                status = True
            Pass = True
        
        except TypeError:
            counter += 1
            print('Invalid - use number only ( %d )' % counter)
            continue
        
        except ValueError:
            counter += 1
            print('Invalid - value has to be between 0 and 1 ( %d )' % counter)
            continue
        
        return speed

try:
    msg_color = set_msg_color()
    if msg_color == None:
        raise KeyError
    bg_color = set_bg_color()
    if bg_color == None:
        raise KeyError
    speed = set_speed()
    if speed == None:
        raise KeyError

    sense.show_message("I got it!", text_colour = msg_color, back_colour = bg_color, scroll_speed = speed)

except KeyError:
    print('You have exceeded the number of trials allowed. Bye!')