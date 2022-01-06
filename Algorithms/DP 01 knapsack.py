n = int(input("Enter the number of items: "))
value = input("Enter the values of the %d item(s) in order: " % n).split(' ')
value = [int(i) for i in value]
value.insert(0, None)  # ith item's value at i index
weight = input("Enter the weight of the %d item(s) in order: " % n).split(' ')
weight = [int(i) for i in weight]
weight.insert(0, None)  # ith item's weight at i index

W = int(input("Enter total capacity: "))
table = [[0 for i in range(W + 1)] for i in range(n + 1)]
for i in range(n + 1):
    for wt in range(W + 1):
        if i == 0 or wt == 0:
            table[i][wt] = 0
        elif weight[i] > wt:
            table[i][wt] = table[i - 1][wt]
        else:
            table[i][wt] = max(table[i - 1][wt], value[i] + table[i - 1][wt - weight[i]])

print("Profit: ", table[n][W])

print("Selected item(s): ")
i = n
wt = W
while i > 0 and wt > 0:
    if table[i][wt] != table[i - 1][wt]:
        print(i, end=' ')
        wt = wt - weight[i]
        i -= 1
    else:
        i -= 1
