'''
if n == 1:
    A -> C
else:
    (n-1) A -> B
    A -> C
    (n-1) B -> C
'''

def Hanoi(n, A, B, C):
    if n == 1:
        print(A, '->', C)
    else:
        Hanoi(n - 1, A, C, B)
        print(A, '->', C)
        Hanoi(n - 1, B, A, C)

Hanoi(5, "A", 'B', 'C')