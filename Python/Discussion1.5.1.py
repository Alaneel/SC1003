# Get the number of boys
number_boys = int(input("Enter the number of boys: "))

# Get the number of girls
number_girls = int(input("Enter the number of girls: "))

# Calculate the total number of students
number_total = number_boys + number_girls

# Output version 1: round function
percent_boys = round((number_boys / number_total) * 100)
percent_girls = round((number_girls / number_total) * 100)

print('Boys:', str(percent_boys) + '%')
print('Girls:', str(percent_girls) + '%')