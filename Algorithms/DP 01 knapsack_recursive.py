def knapsack_01(table, value, weight, i, wt):
    if i == 0 or wt == 0:
        return 0

    if table[i][wt] != -1:
        return table[i][wt]

    if weight[i] > wt:
        return knapsack_01(table, value, weight, i - 1, wt)
    else:
        take = value[i] + knapsack_01(table, value, weight, i - 1, wt - weight[i])
        leave = knapsack_01(table, value, weight, i - 1, wt)
        table[i][wt] = max(take, leave)

    return table[i][wt]


n = int(input("Enter the number of items: "))
value = input("Enter the values of the %d item(s) in order: " % n).split(' ')
value = [int(i) for i in value]
value.insert(0, None)  # ith item's value at i index
weight = input("Enter the weight of the %d item(s) in order: " % n).split(' ')
weight = [int(i) for i in weight]
weight.insert(0, None)  # ith item's weight at i index
W = int(input("Enter total capacity: "))
table = [[-1 for i in range(W + 1)] for i in range(n + 1)]
print("Maximum profit: ", knapsack_01(table, value, weight, n, W))
