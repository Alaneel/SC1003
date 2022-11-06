# Robustness: 应对bad input的能力

def division():
    X_str = input('X= ')
    if X_str.isdigit():
        X = int(X_str)
        Y_str = input('Y= ')
        if Y_str.isdigit():
            Y = int(Y_str)
            if Y != 0:
                return X // Y
            else:
                print("Y cannot be zero")
        else:
            print('input Y is not a valid integer')
    else:
        print('input X is not a valid integer')

if __name__ == '__main__':
    print(division())