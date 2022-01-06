from queue import PriorityQueue
from math import inf


class Node:
    def __init__(self, n):
        self.name = n
        self.key = inf
        self.parent = None
        self.adj = []
        self.isVisited = False

    def __lt__(self, other):
        return self.key < other.key


node_name = input("Enter nodes' name: ").split()
e = int(input("How many edges: "))

nodes = dict()
for node in node_name:
    nodes[node] = Node(node)

print("Enter edges' information (u v w).")
for i in range(e):
    u, v, w = input("Edge %d: " % (i+1)).split()
    nodes[u].adj.append([v, int(w)])
    nodes[v].adj.append([u, int(w)])

Q = PriorityQueue()
s = input("Enter source node: ")
nodes[s].key = 0
nodes[s].parent = s
Q.put(nodes[s])

mstWeight = 0
while not Q.empty():
    u = Q.get()
    # print(u)

    if u.isVisited is False:
        u.isVisited = True
        mstWeight += u.key

        for element in u.adj:
            v = element[0]
            w = element[1]

            if nodes[v].isVisited is False and nodes[v].key > (u.key + w):
                nodes[v].key = u.key + w
                nodes[v].parent = u.name
                Q.put(nodes[v])


def path_print(x):
    if nodes[x].parent is x:
        print(x, end=' ')

    if nodes[x].parent is not x:
        path_print(nodes[x].parent)
        print(x, end=' ')


d = input("Destination node: ")
print("Cost: %d" % nodes[d].key)
print("Path: ", end='')
path_print(d)

print()
for node in list(nodes):
    print(nodes[node].key, nodes[node].parent, nodes[node].isVisited, nodes[node].adj)
