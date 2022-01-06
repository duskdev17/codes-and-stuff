from _collections import defaultdict

n = int(input("How many nodes? "))
e = int(input("How many edges? "))

adj_list = {}
print(adj_list)

for i in range(e):
    u, v = input("Edge %d: " %(i+1)).split()
    if u in adj_list:
        adj_list[u].append(v)
    else:
        adj_list[u] = [v]
    if v in adj_list:
        adj_list[v].append(u)
    else:
        adj_list[v] = [u]

print(adj_list)