str_1 = input("Enter first string: ")
str_2 = input("Enter second string: ")
length_1 = len(str_1)
length_2 = len(str_2)

value_table = [[0 for i in range(length_2 + 1)] for j in range(length_1 + 1)]
arrow_table = [['Blank' for i in range(length_2 + 1)] for j in range(length_1 + 1)]
# table_format = [[0 for i in range(number_of_column)] for j in range(number_of_row)]

for i in range(length_1 + 1):
    for j in range(length_2 + 1):
        if i == 0 or j == 0:
            value_table[i][j] = 0  # though it is redundant as it was initialized 0
        elif str_1[i - 1] == str_2[j - 1]:
            value_table[i][j] = value_table[i - 1][j - 1] + 1
            arrow_table[i][j] = 'diagonal'
        elif value_table[i - 1][j] >= value_table[i][j - 1]:
            value_table[i][j] = value_table[i - 1][j]
            arrow_table[i][j] = 'upper'
        else:
            value_table[i][j] = value_table[i][j - 1]
            arrow_table[i][j] = 'left'

print("LCS length: ", value_table[len(str_1)][len(str_2)])


def lcs_print(arrow_table, i, j):
    if i == 0 or j == 0:
        return 0

    if arrow_table[i][j] == 'diagonal':
        lcs_print(arrow_table, i - 1, j - 1)
        print(str_2[j - 1], end="")
    elif arrow_table[i][j] == 'upper':
        lcs_print(arrow_table, i - 1, j)
    else:
        lcs_print(arrow_table, i, j - 1)


print("LCS: ", end="")
lcs_print(arrow_table, length_1, length_2)
