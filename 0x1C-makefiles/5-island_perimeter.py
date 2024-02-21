#!/usr/bin/python3
"""
Create a function def island_perimeter(grid):
that returns the perimeter of the island described in grid
"""

def island_perimeter(grid):
    """
    returns the perimeter of the island described in grid
    """
    meter = 0
    rows = len(grid)
    columns = len(grid[0])

    for i in range(rows):
        for x in range(columns):
            if grid[i][x] == 1:
                meter += 4
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 2
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 2
    return meter
