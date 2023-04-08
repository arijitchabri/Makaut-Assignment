from collections import namedtuple

from matplotlib import pyplot as plt

point = namedtuple("Point", 'x, y')
start = point(31, 73)
end = point(11, 13)


abs_x = abs(end.x - start.x)                        # Absolute difference
abs_y = abs(end.y - start.y)                        # Absolute difference

incX = 1 if end.x - start.x >= 0 else -1            # Increment of x
incY = 1 if end.y - start.y >= 0 else -1            # Increment of y

point_list = [start]                                # Storing the points

new_point = start

x = start.x
y = start.y

if abs_x >= abs_y:
    decision = 2 * abs_y - abs_x                    # Initializing the decision variable
    while new_point.x != end.x:                     # Main logic
        x += incX
        if decision > 0:
            y += incY
            decision -= 2 * abs_x
        decision += 2 * abs_y
        new_point = point(x, y)
        point_list.append(new_point)
else:
    decision = 2 * abs_x - abs_y                    # Initializing the decision variable
    while y != end.y:                               # Main logic
        y += incY
        if decision > 0:
            x += incX
            decision -= 2 * abs_y
        decision += 2 * abs_x
        new_point = point(x, y)
        point_list.append(new_point)

xco, yco = zip(*[(i.x, i.y) for i in point_list])
plt.plot(xco, yco, marker="o", markersize=1, markerfacecolor="green")
plt.show()
