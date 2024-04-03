#!/usr/bin/python3
""" 5-island_perimeter"""


def island_perimeter(grid):
    """
     returns the perimeter of the island described in grid
    """
    num_rows = len(grid)
    num_col = len(grid)
    perimeter = 0

    for row in range(num_rows):
        for col in range(num_col):
            if grid[row][col] == 1:
                perimeter += 4
                if row > 0 and grid[row - 1][col] == 1:
                    perimeter -= 2 
                if col > 0 and grid[row][col - 1] == 1:
                    perimeter -= 2

        return perimeter
