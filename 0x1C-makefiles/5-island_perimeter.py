#!/usr/bin/python3

"""
reruns the perimenter of the the island described in grid
"""
def island_perimeter(grid):
    """
    grind is a list of list of integers:
    0 rep a water zone
    1 rep a land zone
    One cell is a square with side length 1
    Grid cells are connected horizontally/vertically(not diagonally)
    Grid is rectangular, width and height <= 100
    Crid is completely surrounded by water and there is one island
    Island doesn't have lakes
    """
    ans = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if (grid[i][j] == 1):
                if((i < len(grid) - 1) and (grid[i+1][j] == 0)):
                    ans += 1
                elif((j < len(grid[i]) - 1) and (grid[i][j+1] == 0)):
                    ans += 1
                elif( (i > 0) and (grid[i-1][j] == 0)):
                    ans += 1
                elif( (j > 0) and (grid[i][j-1] == 0)):
                    ans += 1
                if( i == len(grid) - 1):
                    ans += 1
                if( j == len(grid[i]) - 1):
                    ans += 1
                
    return (ans)
