str_sentinal = ''
count = 0

while str_sentinal != '####':
    str_sentinal = input("enter a string (enter #### to stop): ")
    for letter in str_sentinal:
        if letter == 'a':
            count += 1
            break

print(count, "Strings with letter 'a'")