#!/usr/bin/python3
'''perimeter'''


def island_perimeter(grid):
    '''perimeter'''

    perimeter = 0
    for row in range(len(grid)):
        for colum in range(len(grid)):
            if grid[row][colum] == 1:
                if grid[row - 1][colum] == 0:
                    perimeter += 1
                if grid[row][colum - 1] == 0:
                    perimeter += 1
                if grid[row][colum + 1] == 0:
                    perimeter += 1
                if grid[row + 1][colum] == 0:
                    perimeter += 1
    return perimeter
