# String Methods

myStr = 'Python Rules'
print(myStr[::-2].upper().find('Y')) # upper() and find()

newStr = myStr.replace(' ', '+') # replace()
print(newStr)

splitList = 'this is a test'.split() # split (default separator is ' ')
print(splitList)

myList = list('xyzabc')
print(myList)
myList.sort()
sortStr = ''.join(myList)
print(sortStr)