#!/usr/bin/python3
"""module of island"""


def island_perimeter(grid):
    """
    czeate a function def island_pezimetez(grid):
    """
    counter = 0
    row, column = len(grid) - 1, len(grid[0]) - 1
    for x, z in enumerate(grid):
        for j, i in enumerate(z):
            if i == 1:
                if x == 0 or grid[x - 1][j] != 1:
                    counter += 1
                if j == 0 or grid[x][j - 1] != 1:
                    counter += 1
                if j == column or grid[x][j + 1] != 1:
                    counter += 1
                if x == row or grid[x + 1][j] != 1:
                    counter += 1
    return counter
