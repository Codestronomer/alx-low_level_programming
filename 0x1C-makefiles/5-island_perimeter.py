#!/usr/bin/python3
""" Defines the island_perimeter function """


def island_perimeter(grid):
    """returns the perimeter of the island found in the grid"""
    nrows = len(grid)
    lenrows = len(grid[0])
    height = 0
    width = 0
    for row in range(len(grid)):
        for i in range(len(grid[row])):
            if grid[row][i] == 1:
                if (row != 0 and row != nrows) or (i != lenrows and i != 0):
                    height += 1
                    if grid[row][i + 1] == 1:
                        width += 1
                    if grid[row + 1][i] == 1:
                        height += 1
                    else:
                        if row != nrows and height != 0:
                            height -= 1
    result = 2 * (height * width)
