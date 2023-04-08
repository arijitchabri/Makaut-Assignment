from collections import namedtuple

from matplotlib import pyplot as plt

point = namedtuple("Point", 'x, y')
start = point(31, 73)
end = point(11, 13)
point_list = [start]  # Storing the points

def midpoint_line(start, end):
    """
    Draw a line using midpoint line drawing algorithm.
    Args:
        start (Point): Start point of the line.
        end (Point): End point of the line.
    Returns:
        list: List of points representing the line.
    """
    dx = end.x - start.x
    dy = end.y - start.y

    if abs(dx) > abs(dy):
        steps = abs(dx)
        incX = 1 if dx > 0 else -1
        incY = dy / abs(dx) if dy != 0 else 0
    else:
        steps = abs(dy)
        incX = dx / abs(dy) if dx != 0 else 0
        incY = 1 if dy > 0 else -1

    x = start.x
    y = start.y
    p = 0

    for i in range(steps):
        x += incX
        y += incY
        p += 2 * abs(dy) - 2 * abs(dx)
        if p >= 0:
            y += incY
            p -= 2 * abs(dx)
        new_point = point(round(x), round(y))
        point_list.append(new_point)  # Storing the points

    return point_list

midpoint_line(start, end)

xco, yco = zip(*[(i.x, i.y) for i in point_list])
plt.plot(xco, yco, marker="o", markersize=1, markerfacecolor="green")
plt.show()