import string

LENGTH = 8 # the minimum length of a strong password

password = input('Input your password: ')

upCase = False # indicating if the password has at least one uppercase letter
lowCase = False # indicating if the password has at least one lowercase letter
digit = False # indicating if the password has at least one digit
punc = False # indicating if the password has at least one punctuation

for char in password:

    if char.isupper():
        upCase = True
    
    if char.islower():
        lowCase = True
    
    if char.isdigit():
        digit = True

    if char in string.punctuation:
        punc = True

length = len(password) # get the length of the password

strong = upCase and lowCase and digit and punc and length > LENGTH

# strong would be True, if all the conditions hold

if strong:
    print('Your password is strong enough!')
else:
    print('Your password is weak.')