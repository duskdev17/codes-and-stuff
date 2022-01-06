from math import inf


def minimum_coin(table, coins, sum):
    if sum < 1:
        return 0

    if table[sum] != inf:
        return table[sum]

    for value in coins:
        if value <= sum:
            temp = minimum_coin(table, coins, sum - value)
            if temp + 1 < table[sum]:
                table[sum] = temp + 1

    return table[sum]


S = int(input("Total amount: "))
coins = input("Enter coin values separated by space: ").split(' ')
coins = [int(i) for i in coins]
table = [inf] * (S + 1)
print("Minimum number of coins: ", minimum_coin(table, coins, S))
