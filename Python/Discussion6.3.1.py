# Non-recursive version written by myself

def reverser(aList):
    if len(aList) == 1:
        return aList
    else:
        return reverser(aList[1:]) + aList[0]
    
def symmetricString(a_str):
    return a_str + reverser(a_str)

myStr = 'AbCdE'

str1 = symmetricString(myStr)

print(str1)