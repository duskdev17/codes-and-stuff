n = int(input("Enter the number of nodes: "))
e = int(input("Enter the number of edges: "))

adj_list = [[] for j in range(n)]
# list of lists. Each list is empty.
# we will add adjacent nodes of vertex 0 to list[0]
#print(adj_list)

print("Enter edges in separate lines.")
for i in range(e):
    u, v = map(int, input().split())
    adj_list[u].append(v)
    adj_list[v].append(u)

for line in adj_list:
    print('Adjacency list of vertex %d: ' % (adj_list.index(line)), end='')
    for element in line:
        print(element, end=" ")
    print()