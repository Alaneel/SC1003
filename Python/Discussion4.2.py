grades = {}

def inputRecord(dataBase, group, id, score):
    dataKey = (group, id)
    dataBase[dataKey] = score

def query(dataBase, group, id):
    try:
        key = (group, id)
        return dataBase[key]

    except KeyError:
        return None

def listGrades(dataBase, group):
    listOfScores = [score for key, score in dataBase.items() if key[0] == group]
    return listOfScores

def maxGrade(dataBase, group):
    scores = listGrades(dataBase, group)
    return max(scores)

def listGroups(dataBase):
    return [key for key in dataBase.keys()]

def showMsg():
    print('\n==================================================================')
    print('Welcome to the grading system! Please enter your option:')
    print('1: input record')
    print('2: query a student')
    print('3: list grades in a group')
    print('4: get max in a group')
    print('5: list all group names')
    print('6: exit')
    print('==================================================================')

INPUT = 1
QUERY = 2
LIST = 3
MAX = 4
LISTALLGROUPS = 5
EXIT = 6

option = INPUT

while option != EXIT:
    showMsg()
    option = int(input('option: '))

    if option == INPUT:
        groupNAME = input('Please input the group name: ')
        sID = int(input('Please input the student id: '))
        score = int(input('Please input the score: '))

        inputRecord(grades, groupNAME, sID, score)

    elif option == QUERY:
        groupNAME = input('Please input the group name: ')
        sID = int(input('Please input the student id: '))   

        score = query(grades, groupNAME, sID)

        print("The student's score is:", score)

    elif option == LIST:
        groupNAME = input('Please input the group name: ')

        scoresInGroup = listGrades(grades, groupNAME)

        print('The scores in', groupNAME, ':', end='')
        print(scoresInGroup)

    elif option == MAX:
        groupNAME = input('Please input the group name: ')
        highestScore = maxGrade(grades, groupNAME)

        print('The highest scores in', groupNAME, ':', highestScore)
    
    elif option == LISTALLGROUPS:
        print(listGroups(grades)) 