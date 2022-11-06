# CBT operations

tree = [[[7], 1, [9]], 3, [[8], 2, [4]]]

def numOfNodes(t):
    if len(t) == 1:
        return 1
    else:
        numLeft = numOfNodes(t[0])
        numRight = numOfNodes(t[2])
        return numLeft + 1 + numRight

def sumNodes(t):
    if len(t) == 1:
        return t[0]
    else:
        sumLeft = sumNodes(t[0])
        sumRight = sumNodes(t[2])
        return sumLeft + t[1] + sumRight

def maxNodes(t):
    if len(t) == 1:
        return t[0]
    else:
        maxLeft = maxNodes(t[0])
        maxRight = maxNodes(t[2])
        maxValue = t[1]

        if maxLeft > maxValue:
            maxValue = maxLeft
        
        if maxRight > maxValue:
            maxValue = maxRight
        
        return maxValue

def minNodes(t):
    if len(t) == 1:
        return t[0]
    else:
        minLeft = minNodes(t[0])
        minRight = minNodes(t[2])
        minValue = t[1]

        if minLeft < minValue:
            minValue = minLeft
        
        if minRight < minValue:
            minValue = minRight
        
        return minValue

def mirror(t):
    if len(t) == 1:
        return t
    else:
        parent = t[1]
        mirrorLTree = mirror(t[0])
        mirrorRTree = mirror(t[2])

        return [mirrorRTree, parent, mirrorLTree]

def PrintTree(t, level):
    if len(t) == 1:
        print('     ' * level, end='')
        print(t[0])
    else:
        PrintTree(t[2], level + 1)
        print('     ' * level, end='')
        print(t[1])

        PrintTree(t[0], level + 1)

print('Number of Nodes: ', end='')
print(numOfNodes(tree))
print('Sum of Nodes: ', end='')
print(sumNodes(tree))
print('Max of Nodes: ', end='')
print(maxNodes(tree))
print('Min of Nodes: ', end='')
print(minNodes(tree))
print('Mirrored Nodes: ', end='')
print(mirror(tree))
print('Visualized Tree:')
PrintTree(tree, 0)