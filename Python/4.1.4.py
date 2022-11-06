# List Methods

myList = [1, 2, 3, 4, 5]
L = [1, 2]

myList[0] = 'a' # Assign
print(myList)

myList.append('e') # Append
print(myList)

myList.extend(L) # Extend = +
print(myList)

print(myList.pop(3)) # pop (default argument is the last index) and return the deleted element
print(myList)

myList.insert(-100, 'b') # insert
print(myList)

myList.remove('a') # remove only one which is the first one
myList.remove('b')
myList.remove('e')
print(myList)

myList.sort() # sort = sorted(myList)
print(myList)

myList.reverse() # reverse
print(myList)

# List Comprehensions

print([c for c in "Hi There Dad" if c.isupper()])