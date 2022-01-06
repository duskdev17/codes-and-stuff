"""
Problem: Fractional knapsack problem
Original source: https://gist.github.com/uan4ik/2a82e838499b41507358
"""
print("Enter number of times and total weight: ", end="")
n, total_weight = map(int, input().split())

print("Enter %d items' value and weight in separate lines." %n)
item = []
for i in range(n):
    value, weight = map(int, input().split())
    item.append((value, weight, value * 1.0 / weight))
    # This will create a list of tuples. [[value_0, weight_0, ratio_0], [value_1, weight_1, ratio_1], ...]

sorted_item = sorted(item, key=lambda x: x[2], reverse=True)
profit = 0
for element in sorted_item:
    if total_weight >= element[1]:
        total_weight -= element[1]
        profit += element[0]
    else:
        profit += total_weight * 1.0 / element[1] * element[0]
        break

print(format(profit, '.3f'))
