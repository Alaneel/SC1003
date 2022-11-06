scores1 = [80, 91, 75, 80, 65, 76, 90, 84]
scores2 = [74, 59, 12, 98, 35, 42, 74, 75, 90]

avg1 = float(sum(scores1) / len(scores1))
avg2 = float(sum(scores2) / len(scores2))

maxNum = max(max(scores1), max(scores2))

maxAvg = max(avg1, avg2)

print('Highest Avg:', maxAvg)
print('Highest Score:', maxNum) 