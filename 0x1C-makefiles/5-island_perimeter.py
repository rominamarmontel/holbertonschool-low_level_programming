#!/usr/bin/python3
"""Create a function def island_perimeter(grid)"""


def island_perimeter(grid):
    """This module returns the perimeter of the island described in grid"""
    perimetre = 0
    for yoko in range(len(grid)):
        for tate in range(len(grid[yoko])):
            if grid[yoko][tate] == 1:
                if grid[yoko - 1][tate] != 1:
                    perimetre += 1
                if grid[yoko][tate - 1] != 1:
                    perimetre += 1
            elif grid[yoko][tate] == 0:
                if grid[yoko - 1][tate] != 0:
                    perimetre += 1
                if grid[yoko][tate - 1] != 0:
                    perimetre += 1
    return perimetre
