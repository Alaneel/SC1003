def higher_average(L1, L2):
    avg_L1 = float(sum(L1) / len(L1))
    avg_L2 = float(sum(L2) / len(L2))
    if avg_L1 < avg_L2:
        print('Class 2 has the highest average score')
    elif avg_L1 == avg_L2:
        print('Class 1 and Class 2 has the same average score')
    else:
        print('Class 1 has the highest average score')

def higher_maximum(L1, L2):
    max_L1 = max(L1)
    max_L2 = max(L2)
    if max_L1 < max_L2:
        print('Class 2 has the highest maximum score')
    elif max_L1 == max_L2:
        print('Class 1 and Class 2 has the same maximum score')
    else:
        print('Class 1 has the highest maximum score')

if __name__ == '__main__':

    L1 = [88, 95, 96, 93, 90]
    L2 = [89, 96, 97, 92, 91]

    print()
    higher_average(L1, L2)
    print()
    higher_maximum(L1, L2)
    print()
    
    print("Thank you for using our service!")