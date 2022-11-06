count = 0

while True:
    str_sentinal = input("enter a string (enter #### to stop): ")
    if str_sentinal == '####':
        break
    for letter in str_sentinal:
        if letter == 'a':
            count += 1
            break
        
print(count, "strings with letter 'a'")