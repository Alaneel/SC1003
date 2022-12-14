# Sort by Any Field

from operator import itemgetter
restaurant_info = [['Kentucky', 15, 6, 'Fried chicken'], ['Macdonald', 12, 5, 'Burger'], ['Subway', 13, 7, 'Sandwiches']]

# field 1 (index 0): name of restaurant
# field 2 (index 1): distance of restaurant
# field 3 (index 2): average price per person of the restaurant
# field 4 (index 3): signature dish of the restaurant

sort_field = ['name', 'distance', 'price', 'food']

for i in range(len(sort_field)):
    sort_info = sorted(restaurant_info, key = itemgetter(i))
    print('sort by', sort_field[i], ':', sort_info)