# Suggested Version

def merge(leftSub, rightSub):
    result = []

    # while left nad right list has elements
    while leftSub and rightSub:
        if leftSub[0] < rightSub[0]:
            result.append(leftSub[0])
            leftSub.pop(0)
        else:
            result.append(rightSub[0])
            rightSub.pop(0)
    
    # left list still contain elements. Append its contents to end of the result
    if leftSub:
        result.extend(leftSub)
    else:
    # right list still contain elements. Append its contents to end of the result
        result.extend(rightSub)
    
    return result

def mergeSort(aList):
    Length = len(aList)

    # base case
    if Length < 2:
        return aList

    leftSub = aList[ : Length // 2]
    rightSub = aList[Length // 2 :]

    # merge sort left and right list recursively
    leftSub = mergeSort(leftSub)
    rightSub = mergeSort(rightSub)
    return merge(leftSub, rightSub)

list_test = [21, 1, 26, 45, 3, 3, 4, 27, 43, 34, 46, 40]
new_list = mergeSort(list_test)
print(new_list)