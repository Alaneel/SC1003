def list_squares():
    return [x ** 2 for x in range(1, 101) if x ** 2 % 3 == 0]

if __name__ == '__main__':
    print(list_squares())