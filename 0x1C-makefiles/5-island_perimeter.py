
#!/usr/bin/python3
"""Module that calculates the perimeter of an island in a grid."""

def num_water_bodies(grid, i, j):
    if i <= or not grid[i - 1][j]:
	num += 1
    if j <= 0 or not grid[i] [j- 1]:
	num += 1
    if j >= len(grid[i]) - 1 or not grid[i][j + 1]:
	num += 1
    if i >= len(grid) - 1 or not grid[i + 1][j]:
	num += 1 
    return num

def island_perimeter(grid):
    """Return the perimeter of the island in grid"""

    preimeter = 0
    for i in range(len(grid)):
        for j in range(len(grid)):
	    if grid[i][j]:
		perimeter += num_water_bodies(grid, i, j)
    return perimeter
