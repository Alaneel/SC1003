# Find the max number in a list

def maxNum(aList):
    if len(aList) == 1: # base case (conquer)
        return aList[0]
    else: # recursive step (divide)
        leftMax = aList[0]
        rightMax = maxNum(aList[1:])
        return max(leftMax, rightMax)

L = [1, 3, 5, 997, 8, 16, 25, 99]
print(maxNum(L))