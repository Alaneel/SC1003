# Binary search


# Suggested version 2: Recursive binary search

def binarySearch(items, target, low = 0, high = None):
    if high == None:
        high = len(items) - 1
    
    if low > high:
        return False
    
    mid = (low + high) // 2

    if target == items[mid]:
        return True
    elif target > items[mid]:
        return binarySearch(items, target, low = mid + 1, high = high)
    elif target < items[mid]:
        return binarySearch(items, target, low = low, high = mid - 1)


'''
# Suggested version 1: Iterative binary search

def binarySearch(items, target): # Start with the entire list
    low = 0
    high = len(items) - 1
    
    while low <= high: # Repeatedly subdivide the list in half until the target is found
        mid = (low + high) // 2 # locates the middle item of the list
        if items[mid] == target: # compares middle item with the search key
            return True
        elif target < items[mid]: # target is less than middle item
            high = mid - 1
        else: # target is greater than middle item
            low = mid + 1
    return False
'''

'''
# The version written by myself (recursive)

def binarySearch(aList, obj):
    if len(aList) == 1:
        if aList[0] == obj:
            print('Found')
            return True
        else:
            print('Not Found')
            return False
    
    else:
        if aList[len(aList) // 2] == obj:
            print('Found')
            return True
        elif aList[len(aList) // 2] > obj:
            binarySearch(aList[:len(aList) // 2], obj)
        else:
            binarySearch(aList[len(aList) // 2 + 1:], obj)
'''

numbers = range(1, 50, 1)
search_key = 34

if (binarySearch(numbers, search_key)):
    print(search_key, 'is in the list')
else:
    print(search_key, 'is not in the list')