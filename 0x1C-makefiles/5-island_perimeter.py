#!usr/bin/python3
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
    ret = 0
    for i in grid:
        for j in i:
            ans += j
    if (ans % 2):
        ret = (3 * 2) + (2 * (ans - 2))
    return (ret)
