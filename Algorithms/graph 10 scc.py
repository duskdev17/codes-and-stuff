import queue


def dfs(current_node):
    if current_node not in visited:
        visited.add(current_node)

        if current_node in adj_list:
            for neighbour in adj_list[current_node]:
                if neighbour not in visited:
                    dfs(neighbour)

        stack.put(current_node)


def transpose_dfs(current_node):
    if current_node not in visited_transposed:
        visited_transposed.add(current_node)

        if current_node in transpose_adj_list:
            for neighbour in transpose_adj_list[current_node]:
                if neighbour not in visited_transposed:
                    transpose_dfs(neighbour)

        print(current_node, end=' ')


n = int(input("How many nodes: "))
e = int(input("How many edges: "))
stack = queue.LifoQueue(maxsize=n)
visited = set()
visited_transposed = set()

adj_list = {}
transpose_adj_list = {}

print("Enter edges (u, v) in separate line(s).")
for i in range(e):
    u, v = input().split()
    if u in adj_list:
        adj_list[u].append(v)
    else:
        adj_list[u] = [v]
    if v in transpose_adj_list:
        transpose_adj_list[v].append(u)
    else:
        transpose_adj_list[v] = [u]

print(adj_list)
''' simple way
import collections

adj_list = collections.defaultdict(list)
transpose_adj_list = collections.defaultdict(list)
for i in range(e):
    u, v = input().split()
    adj_list[u].append(v)
    transpose_adj_list[v].append(u)
'''

for vertex in adj_list:
    if vertex not in visited:
        dfs(vertex)

scc = 0
while not stack.empty():
    node = stack.get()
    #print(node)
    if node not in visited_transposed:
        scc += 1
        print("SCC ", scc, ":", end=' ')
        transpose_dfs(node)
        print()
