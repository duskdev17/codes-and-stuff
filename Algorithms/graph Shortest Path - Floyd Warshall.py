from math import inf

nodes_name = input("Enter nodes' name: ")
e = int(input("How many nodes? "))
n = len(nodes_name)

distance_matrix = [[inf for i in range(n)] for j in range(n)]
path_matrix = [[None for i in range(n)] for j in range(n)]

print("Enter edge information (u v w).")
for i in range(e):
    u, v, w = input("Edge %d: " % (i+1)).split()
    distance_matrix[u][v] = int(w)
    path_matrix[u][v] = u

for k in range(n):
    for i in range(n):
        for j in range(n):
            if i == j:
                distance_matrix[i][j] = 0
                path_matrix[i][j] = i

            if distance_matrix[i][j] > distance_matrix[i][k] + distance_matrix[k][j]:
                distance_matrix[i][j] = distance_matrix[i][k] + distance_matrix[k][j]
                path_matrix[i][j] = path_matrix[k][j]

