# Non-recursive version written by myself

def reverser(aList):
    if len(aList) == 1:
        return aList
    else:
        return reverser(aList[1:]) + aList[0]

def reverseAndOppositeCase(a_str):
    new_str = reverser(a_str)
    opposite_str = ''
    for char in new_str:
        if char.isupper():
            opposite_str += char.lower()
        else:
            opposite_str += char.upper()
    return opposite_str

myStr = 'AbCdE'

str1 = reverseAndOppositeCase(myStr)

print(str1)