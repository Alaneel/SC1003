# Linear search

foodList = ['Bakery Cuisine', 'Subway', 'Peach Garden Chinese Restaurant', 'Mr Bean', 'Pizza Hut', 'The Soup Spoon Union', 'North Spine Food Court']

for item in foodList:
    if item == 'Pizza Hut':
        print('Pizza Hut is in list')
        print('Index for Pizza Hut:', foodList.index(item)) # index() is case-sensitive
        break