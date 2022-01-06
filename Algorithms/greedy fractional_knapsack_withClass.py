class Item:
    def __init__(self, v, w, id):
        self.value = v
        self.weight = w
        self.id = id
        self.ratio = v / w

    def __lt__(self, other):
        return self.ratio < other.ratio
        # during sorting we want to consider ratio as the key


print("Enter number of items and total weight: ", end="")
n, total_weight = map(int, input().split())

print("Enter %d items' value and weight in separate lines." % n)
items = []
for i in range(n):
    value, weight = map(int, input("Item %d: " % (i + 1)).split())
    items.append(Item(value, weight, i))

items.sort(reverse=True)
profit = 0
for element in items:
    if total_weight >= element.weight:
        profit += element.value
        total_weight -= element.weight
        print("%d kg of item %d is taken." % (element.weight, element.id + 1))
    else:
        profit += total_weight * element.ratio
        print('%d kg of item %d is taken' % (total_weight, element.id))
        break

print('Total profit = ', format(profit, '.3f'))
