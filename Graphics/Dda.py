from collections import namedtuple

from matplotlib import pyplot as plt

point = namedtuple("Point", 'x, y')
start = point(31, 73)
end = point(11, 13)


dx = (end.x - start.x)      # Keeping the actual difference value safe
dy = (end.y - start.y)      # Keeping the actual difference value safe

steps = max(abs(dx), abs(dy))   # Calculating the maximum steps
incX = dx / steps                 # Increment of x
incY = dy / steps                 # Increment of y

point_list = [start]            # Storing the points

new_point = start

for i in range(0, steps):
    x = (new_point.x + incX)
    y = (new_point.y + incY)
    new_point = point(x, y)
    point_list.append(new_point)  # Storing the actual non rounded points

point_list = [point(round(i.x), round(i.y)) for i in point_list]     # Rounding the points

xco, yco = zip(*[(i.x, i.y) for i in point_list])
plt.plot(xco, yco, marker="o", markersize=1, markerfacecolor="green")
plt.show()
