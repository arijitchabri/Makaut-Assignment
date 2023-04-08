## DDA Explain

Step-by-step explanation of how the DDA algorithm works:

1. Input the coordinates of the two endpoints of the line, usually denoted as (x1, y1)
and (x2, y2), where (x1, y1) represents the starting point 
and (x2, y2) represents the ending point.

2. Calculate the differences in x and y coordinates between the two endpoints:

```
dx = x2 - x1
dy = y2 - y1
```

3. Determine the number of steps required to traverse the line. This is done by taking the maximum absolute difference between dx and dy, and using it as the number of steps:

```
steps = max(abs(dx), abs(dy))
```

4. Calculate the incremental step values for x and y coordinates, also known as the slopes:

```
incx = dx / steps
incy = dy / steps
```
5. Initialize a starting point (x, y) with the coordinates of the first endpoint (x1, y1):


```
x = x1
y = y1
```

6. Loop through the number of steps determined in step 3, and for each step, update the coordinates (x, y) by incrementing them with the incremental step values (incx, incy):


```
for i in range(0, steps):
    x = x + incx
    y = y + incy
```

7. For each updated coordinate (x, y) in the loop, round them to the nearest integer to obtain the final pixel coordinates to be plotted on the screen:


```
pixel_x = round(x)
pixel_y = round(y)
```

8. Store the final pixel coordinates (pixel_x, pixel_y) in a list or plot them on the screen to draw the line.

###### The DDA algorithm uses incremental steps to calculate the coordinates of points along a straight line, making it a relatively simple and efficient method for line drawing in digital displays. However, it may suffer from rounding errors and can produce jagged lines at steep angles, as it uses floating-point arithmetic and rounding. Therefore, it may not be suitable for highly accurate or high-resolution line drawing applications, and other algorithms such as Bresenham's line drawing algorithm or anti-aliasing techniques may be preferred in those cases.


## Bresenham's line drawing algorithm.

Bresenham's line drawing algorithm is a rasterization algorithm used to draw lines on a discrete grid or pixel-based display, such as a computer screen. It was developed by Jack Bresenham in 1962 and is widely used due to its efficiency in generating accurate and fast line drawing.

<br>The algorithm works by determining which pixels to turn on or off along the line path between two given points (x1, y1) and (x2, y2) on a grid. It avoids the need for floating-point arithmetic and only uses integer arithmetic, making it computationally efficient.

<br>The basic idea of Bresenham's algorithm is to start at the first point (x1, y1) and move towards the second point (x2, y2), while making decisions at each step on which pixel to turn on or off to approximate the line. The algorithm considers the slope of the line and the error accumulated at each step to determine the next pixel to be drawn.

<br>Here are the steps of Bresenham's line drawing algorithm for lines with a slope between 0 and 1 (i.e., |slope| <= 1):

1. Compute the differences between the x and y coordinates of the two points: dx = x2 - x1 and dy = y2 - y1.
2. Determine the increment direction for x and y, which can be either +1 or -1, based on the sign of dx and dy: incX = +1 if dx > 0 else -1, and incY = +1 if dy > 0 else -1.
3. Initialize the starting point (x, y) to (x1, y1).
4. Initialize the decision variable, which is used to determine which pixel to turn on or off, to 2 * dy - dx.
5. Loop from x = x1 to x = x2, and at each step, do the following:
	- Plot the pixel at (x, y).
	- If the decision variable is greater than 0, increment or decrement y by incY (depending on the sign of dy), and subtract 2 * dx from the decision variable.
	- Add 2 * dy to the decision variable.
	- Increment or decrement x by incX (depending on the sign of dx).
<br>For lines with slopes greater than 1 (i.e., |slope| > 1), the roles of x and y are swapped in the algorithm, and the algorithm makes decisions based on the error accumulated in the y direction instead of the x direction.

###### Bresenham's line drawing algorithm is efficient because it only uses integer arithmetic and avoids costly floating-point calculations. It also avoids the use of multiplication, division, or square roots, which further improves its computational efficiency.

## Midpoint Line Drawing

Step-by-step explanation of the Midpoint Line Drawing Algorithm:

1. Input two points: "start" and "end", with respective x and y coordinates.
2. Calculate the differences in x and y coordinates between the "start" and "end" points: dx = (end.x - start.x) and dy = (end.y - start.y).
3. Determine the signs of dx and dy to determine the direction of the line: sign_x = 1 if dx > 0 else -1, and sign_y = 1 if dy > 0 else -1.
4. Initialize the current position (x, y) to the "start" point: x = start.x and y = start.y.
5. Initialize the decision variable (d) to 0: d = 0.
6. Create an empty list to store the points along the line: point_list = [].
7. Loop from 0 to max(abs(dx), abs(dy)):
    - At each iteration, append the current position (x, y) to the point_list.
    - Increment the coordinate x or y with the larger absolute difference (abs(dx) or abs(dy)), based on the value of the decision variable (d):
    - If d <= 0:
        - Increment x by sign_x.
        - Update the decision variable by adding abs(dy).
    - Else:
        - Increment y by sign_y.
        - Update the decision variable by subtracting abs(dx).
    - Update the decision variable by subtracting abs(dy) or adding abs(dx), depending on the value of d.
8. After the loop, the point_list contains the points along the line.
9. Optionally, round the coordinates of the points in the point_list to integer values.
10. The point_list now represents the approximate line between the "start" and "end" points.

###### The Midpoint Line Drawing Algorithm efficiently calculates the points along the line by using integer arithmetic and a decision variable, avoiding the need for floating-point arithmetic and reducing the number of calculations required compared to the original Bresenham's Line Drawing Algorithm. It is commonly used in computer graphics and other real-time applications for drawing lines efficiently.