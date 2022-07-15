#!/usr/bin/python3
def island_perimeter(grid):
    perimetre = 0
    for col in range(0, 5):
        for row in range(0, 6):
            if grid[col][row] == 1:
                if grid[col - 1][row] != 1:
                    perimetre += 1
                if grid[col][row -1] != 1:
                    perimetre += 1
            elif grid[col][row] == 0:
                if grid[col - 1][row] != 0:
                    perimetre += 1
                if grid[col][row -1] != 0:
                    perimetre += 1
    return perimetre
