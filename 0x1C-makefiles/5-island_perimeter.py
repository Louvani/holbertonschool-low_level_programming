#!/usr/bin/python3
'''perimeter'''


def island_perimeter(grid):
    '''perimeter'''

    perimeter = 0
    for row in range(len(grid)):
        for colum in range(len(grid[row])):
            if grid[row][colum] == 1:
                # up
                if row - 1 < 0 or grid[row - 1][colum] == 0:
                    perimeter += 1
                # left
                if colum - 1 < 0 or grid[row][colum - 1] == 0:
                    perimeter += 1
                # rigth
                if colum + 1 >= len(grid[row]) or grid[row][colum + 1] == 0:
                    perimeter += 1
                # down
                if row + 1 >= len(grid) or grid[row + 1][colum] == 0:
                    perimeter += 1
    return perimeter
