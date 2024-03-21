from collections import deque

# leer la matriz de entrada
matrix = [list(map(int, input().split())) for _ in range(5)]

# encontrar la posición del número uno
for i in range(5):
    for j in range(5):
        if matrix[i][j] == 1:
            one_pos = (i, j)

# definir las transformaciones posibles: intercambiar filas y columnas vecinas
def swap_rows(matrix, i, j):
    matrix[i], matrix[j] = matrix[j], matrix[i]

def swap_cols(matrix, i, j):
    for k in range(5):
        matrix[k][i], matrix[k][j] = matrix[k][j], matrix[k][i]

# definir la función que genera todos los estados posibles a partir de un estado dado
def generate_states(matrix):
    states = []
    i, j = one_pos
    if i > 0:
        new_matrix = [row[:] for row in matrix]
        swap_rows(new_matrix, i, i-1)
        states.append((new_matrix, (i-1, j), "row"))
    if i < 4:
        new_matrix = [row[:] for row in matrix]
        swap_rows(new_matrix, i, i+1)
        states.append((new_matrix, (i+1, j), "row"))
    if j > 0:
        new_matrix = [row[:] for row in matrix]
        swap_cols(new_matrix, j, j-1)
        states.append((new_matrix, (i, j-1), "col"))
    if j < 4:
        new_matrix = [row[:] for row in matrix]
        swap_cols(new_matrix, j, j+1)
        states.append((new_matrix, (i, j+1), "col"))
    return states

# definir el estado objetivo
goal_matrix = [[1, 1, 1, 1, 1],
               [1, 0, 0, 0, 1],
               [1, 0, 0, 0, 1],
               [1, 0, 0, 0, 1],
               [1, 1, 1, 1, 1]]

# aplicar BFS para encontrar el camino más corto hasta el estado objetivo
visited = set()
queue = deque([(matrix, one_pos, "")])
while queue:
    curr_matrix, curr_pos, curr_move = queue.popleft()
    if curr_matrix == goal_matrix: