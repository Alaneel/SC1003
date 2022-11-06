dataBase = {}
group, id, score = '', '', ''

def inputRecord(dataBase, group, id, score):
    dataBase[group + ' ' + id] = int(score)

def query(dataBase, group, id):
    return dataBase[group + ' ' + id]

def listGrades(dataBase, group):
    return [(key, value) for key, value in dataBase.items() if group in key]

def maxGrade(dataBase, group):
    Group = {}

    for key, value in dataBase.items():
        if group in key:
            Group[key] = value

    maximum = 0

    for num in Group.values():
        if num > maximum:
            maximum = num
    
    return maximum

def listGroups(dataBase):
    return [key for key in dataBase.keys()]

print('Welcome to the grading system! Please enter your option:')

while True:
    print('1: input record')
    print('2: query a student')
    print('3: list grades in a group')
    print('4: get max in a group')
    print('5: list all group names')
    print('6: exit')

    choice = input('option:  ')

    if choice == '1':
        while True:
            status = input('Input records? Please enter y for yes or n for no: ')

            if status != 'y' and status != 'Y':
                print()
                break

            group = input("Enter the student's group number: ")
            id = input("Enter the student's id: ")
            score = input("Enter the student's score: ")

            if group == 'quit' or id == 'quit' or score == 'quit':
                print()
                break

            inputRecord(dataBase, group, id, score)

    elif choice == '2':
        while True:
            status = input('Search records? Please enter y for yes or n for no: ')

            if status != 'y' and status != 'Y':
                print()
                break

            group = input("Enter the student's group number: ")
            id = input("Enter the student's id: ")

            if group == 'quit' or id == 'quit':
                print()
                break
            
            print(query(dataBase, group, id))

    elif choice == '3':
        while True:
            status = input('Show group records? Please enter y for yes or n for no: ')

            if status != 'y' and status != 'Y':
                print()
                break
            
            group = input('Enter the group number: ')

            if group == 'quit':
                print()
                break
            
            print(listGrades(dataBase, group))

    elif choice == '4':
        while True:
            status = input('Show the maximum score of a group? Please enter y for yes or n for no: ')

            if status != 'y' and status != 'Y':
                print()
                break

            group = input('Enter the group number: ')

            if group == 'quit':
                print()
                break

            print(maxGrade(dataBase, group))

    elif choice == '5':
        while True:
            status = input('List all the group names? Please enter y for yes or n for no: ')

            if status != 'y' and status != 'Y':
                print()
                break

            print(listGroups(dataBase))

    else:
        break

print('Thank you for using our service!')