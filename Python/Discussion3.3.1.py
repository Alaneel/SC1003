grades = {} # the database is empty initially

groupName = input('Please input the group name: ')
sID = input('Please input the student id: ')
score = int(input('Please input the score: '))

while score != -1:
    dataKey = (groupName, sID)
    grades[dataKey] = score
    groupName = input('Please input the group name: ')
    sID = input('Please input the student id: ')
    score = int(input('Please input the score: '))

print(grades)