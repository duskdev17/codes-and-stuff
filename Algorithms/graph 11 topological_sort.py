import queue


def dfs(adj, visited, current_node, stack):
    if visited[current_node] != 0:
        return

    visited[current_node] = 1

    for i in range(len(adj[current_node])):  # not a pythonic way
        adjacent_node = adj[current_node][i]
        if visited[adjacent_node] == 0:
            dfs(adj, visited, adjacent_node, stack)

    stack.put(current_node)


n = int(input("Enter the number of nodes: "))
e = int(input("Enter the number of edges: "))

adj_list = [[] for i in range(n)]

print("Enter edges in separate lines.")
for i in range(e):
    u, v = map(int, input().split())
    adj_list[u].append(v)
    #adj_list[v].append(u)

stack = queue.LifoQueue(maxsize=n)

visited = [0 for i in range(n)]
for i in range(n):
    if visited[i] == 0:
        dfs(adj_list, visited, i, stack)


print('Topological order: ', end="")
while not stack.empty():
    node = stack.get()
    print(node, end=' ')


"""
Sample input / output
Enter the number of nodes: 6
Enter the number of edges: 6
Enter edges in separate lines.
5 2
5 0
4 0
4 1
2 3
3 1
DFS: 5 4 2 3 1 0
"""