n = int(input("Enter the number of nodes: "))
e = int(input("Enter the number of edges: "))

adj_matrix = [[0 for i in range(n)] for j in range(n)]

print("Enter edges in separate lines.")
for i in range(e):
    u, v = map(int, input().split())
    adj_matrix[u][v] = 1
    adj_matrix[v][u] = 1

for line in adj_matrix:
    for element in line:
        print(element, end=" ")
    print()
