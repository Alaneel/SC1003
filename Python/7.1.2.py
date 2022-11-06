import time

# Advanced version with early exit

def bubbleSort(aList):
    for passnum in range(len(aList) - 1):
        swapped = False
        for i in range(len(aList) - passnum - 1):
            if aList[i] > aList[i + 1]: # compare the adiacent items
                aList[i], aList[i + 1] = aList[i + 1], aList[i]
                swapped = True
        print('pass', passnum + 1, ':', aList)
        if not swapped: # exit when the list is already sorted
            break

start = time.time()

aList = [x for x in range(10, 0, -1)]
bubbleSort(aList)

end = time.time()

print(end - start)

'''
# Improved version

def bubbleSort(aList):
    for passnum in range(len(aList) - 1):
        for i in range(len(aList) - 1 - passnum):
            if aList[i] > aList[i + 1]:
                aList[i], aList[i + 1] = aList[i + 1], aList[i]

start = time.time()

aList = [x for x in range(1000, 0, -1)]
bubbleSort(aList)
print(aList)

end = time.time()

print(end - start)
'''

'''
# The raw version

def bubbleSort(aList):
    for passnum in range(len(aList) - 1):
        for i in range(len(aList) - 1):
            if aList[i] > aList[i + 1]:
                aList[i], aList[i + 1] = aList[i + 1], aList[i]
    return aList

start = time.time()

aList = [x for x in range(1000, 0, -1)]
bubbleSort(aList)
print(aList)

end = time.time()

print(end - start)
'''

'''
# The version written by myself
def bubbleSort(aList):
    N = len(aList)
    k = 0
    while k < N - 1:
        for i in range(N - 1):
            if aList[i] > aList[i + 1]:
                aList[i], aList[i + 1] = aList[i + 1], aList[i]
        k += 1

start = time.time()

aList = [8, 6, 5, 4]
bubbleSort(aList)
print(aList)

end = time.time()

print(end - start)
'''