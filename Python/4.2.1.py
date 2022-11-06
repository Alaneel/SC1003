# Calculate Square Root (the implementation of sqrt)

x = 10
precision = 0.00000000000001
low = 0
high = max(x, 1)
counter = 0
guess = (low + high) / 2.0

while abs(guess ** 2 - x ) > precision and counter <= 100:
    if guess ** 2 < x:
        low = guess
    else:
        high = guess
    guess = (low + high) / 2.0
    counter += 1

assert counter <= 100, '100 iterations done and no good answer'
print('Num of the iterations:', counter, 'Estimate:', guess)