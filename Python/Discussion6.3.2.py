def symmetricString(a_str):
    if len(a_str) == 1:
        return a_str + a_str
    
    else:
        new_str = a_str[0] + symmetricString(a_str[1:]) + a_str[0]
        return new_str

myStr = 'AbCdE'

str1 = symmetricString(myStr)

print(str1)