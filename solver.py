# Define board size.
n = 3
m = 1

# Count how many edges each square has, to a maximum of 4.
square_counters = [0] * (n * m)

# Create the edges that join adjacent dots.
edges = []
for i in range(n):
    for j in range(m):
        c = i * m + j
        if i == 0:
            edges.append([c])
        if j == 0:
            edges.append([c])
        if i == n - 1:
            edges.append([c])
        else:
            edges.append([c, (i + 1) * m + j])
        if j == m - 1:
            edges.append([c])
        else:
            edges.append([c, i * m + (j + 1)])
edges.sort()

print(edges)

# Create two players. Each starts with a score of zero.
scores = [0, 0]
turn = 0

def MakeMove(e):
    flip_turn = True
    for i in e:
        square_counters[i] += 1
        if square_counters[i] == 4:
            flip_turn = False
    if flip_turn:
        turn = 1 - turn
    edges.remove(e)

def UndoMove(e):
    flip_turn = True
    for i in e:
        if square_counters[i] == 4:
            flip_turn = False
        square_counters[i] -= 1
    if flip_turn:
        turn = 1 - turn
    edges.append(e)
