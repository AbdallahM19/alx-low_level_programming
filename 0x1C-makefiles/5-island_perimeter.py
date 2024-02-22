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
            if grid[i][x]:
                if i <= 0 or not grid[i - 1][x]:
                    meter += 1
                if x <= 0 or not grid[i][x - 1]:
                    meter += 1
                if x >= len(grid[i]) - 1 or not grid[i][x + 1]:
                    meter += 1
                if i >= len(grid) - 1 or not grid[i + 1][x]:
                    meter += 1
    return meter
