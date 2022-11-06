# usr/bin/env python3
# -*- coding: utf-8 -*-
# Time: 16/08/2022
# Author: Alan Wang
# File: Discussion3.2.1.py
# Software: Visual Studio Code

import string

def set_password():
    print()
    print('Valid password should be between 8 and 16 letters or digits, and should include capital letters, lower letters, numbers as well as punctuations')
    print()
    password = input("Set your password: ")
    print()
    upperletter = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'
    lowerletter = 'abcdefghijklmnopqrstuvwxyz'
    number = '1234567890'
    counter = 0

    try:
        if 8 <= len(password) <= 16:
            pass
        else:
            raise TypeError
        
        counter = 0
        for letter in upperletter:
            if letter in password:
                counter += 1
        if counter == 0:
            raise ValueError
        
        counter = 0
        for letter in lowerletter:
            if letter in password:
                counter += 1
        if counter == 0:
            raise AssertionError
        
        counter = 0
        for num in number:
            if num in password:
                counter += 1
        if counter == 0:
            raise ZeroDivisionError

        counter = 0
        for punc in string.punctuation:
            if punc in password:
                counter += 1
        if counter == 0:
            raise ArithmeticError

        print("Great! You've set a strong password!")
        print()
        return 0

    except TypeError:
        print('Invalid length of password! Please try again!')
        print()
        return 1
    except ValueError:
        print('Password too weak! Add some capital letters! Please try again!')
        print()
        return 1
    except AssertionError:
        print('Password too weak! Add some lower letter! Please try again!')
        print()
        return 1
    except ZeroDivisionError:
        print('Password too weak! Add some number! Please try again!')
        print()
        return 1
    except ArithmeticError:
        print('Password too weak! Add some punctuation! Please try again!')

    finally:
        print("Redirecting...")
        print()

if __name__ == '__main__':

    Pass = False
    while Pass == False:
        status = set_password()
        if status == 0:
            Pass = True
            break
        else:
            continue

    print("Thank you for using our service! See you next time")
