# Recursive version written by myself

def reverser(aList):
    if len(aList) == 1:
        return aList
    else:
        return reverser(aList[1:]) + aList[0]

def reverseAndRepeat(a_str, num):
    if len(a_str) == 1: # base case
        return a_str * num
    else: # recursive step
        return reverseAndRepeat(a_str[1:], num) + a_str[0] * num
    
myStr = 'ABC'

str1 = reverseAndRepeat(myStr, 2)
str2 = reverseAndRepeat(myStr, 3)

print(str1)
print(str2)