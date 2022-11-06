# Non-recursive version

def reverser(aList):
    if len(aList) == 1:
        return aList
    else:
        return reverser(aList[1:]) + aList[0]

def reverseAndRepeat(a_str, num):
    reversedStr = reverser(a_str)
    resultStr = ''

    for i in range(len(reversedStr)):
        resultStr = resultStr + (reversedStr[i] * num)
    
    return resultStr

myStr = 'ABC'

str1 = reverseAndRepeat(myStr, 2)
str2 = reverseAndRepeat(myStr, 3)

print(str1)
print(str2)