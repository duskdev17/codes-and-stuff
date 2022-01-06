from collections import defaultdict

n = int(input("How many nodes? "))
e = int(input("How many edges? "))

adj_list = defaultdict(list)
print(adj_list)

for i in range(e):
    u, v = input("Edge %d: " %(i+1)).split()
    adj_list[u].append(v)
    adj_list[v].append(u)

print(adj_list)