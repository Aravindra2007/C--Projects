def create_matrix():
    matrix = []
    print(" enter the matrix values 3*3 ")
    for i in range(3):
        row = []
        for j in range(3):
            element = float(input(f" enter  the matrix elements [{i+1}] [{j+1}]"))
            row.append(element)
        matrix.append(row)
    return matrix

def print_matrix(matrix):
    print(" the matix 3*3 ")
    for row in matrix:
        print(row)

matrix = create_matrix()

print_matrix(matrix)