def dfs(u):
    color[u] = 'gray'

    for element in adj[u]:
        if color[element] == 'white':
            dfs(element)


    color[u] = 'black'
    print(u, end=' ')


# as we want to allow any vertex name not only 0 to n-1
# we need have complete list of all vertices name
nodes = input("Enter nodes' name: ").split()
e = int(input("Number of edges: "))

# creating dictionary to store adjacency list of each vertex
adj = {}
# creating a dictionary to store color's value of each vertex
color = {}
# adding all vertex name as key and an empty list as corresponding value
# adding white color to each vertex
for element in nodes:
    adj[element] = []
    color[element] = 'white'

# creating adjacency list
for i in range(e):
    u, v = input("Edge %d: " % (i + 1)).split()
    adj[u].append(v)
    # if graph is directed then we must eliminate the following line
    adj[v].append(u)
