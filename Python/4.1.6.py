# Dictionary

contacts = {'Bill': '353-1234', 'Rich': '269-1234', 'Jane': '352-1234'}
print(contacts)

myDict = {}
myDict['Bill'] = 25
print(myDict['Bill'])
del myDict['Bill']
print(myDict)

# Dictionary methods

print(contacts.items()) # items() only used for dictionaries

print(contacts.keys())

print(contacts.values())

myDict.update(contacts)
print(myDict)

contacts.clear()
print(contacts)

# Iterating on a dictionary

for key in myDict: # prints all the keys
    print(key)

for key, value in myDict.items(): # prints all the key:value pairs
    print(key, value)

for value in myDict.values(): # prints all the values
    print(value)