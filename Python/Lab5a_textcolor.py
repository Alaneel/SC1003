def get_color(color):
    counter = 0
    Pass = False
    while Pass == False:
        try:
            status = False
            while status == False:
                if counter == 3:
                    raise KeyError
                color_str = input('Enter the value of the %s color for message: ' % color)
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

        except KeyError:
            print('You have exceeded the number of trials allowed. A default value is generated for you')
            return 0