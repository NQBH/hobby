from math import sqrt, floor
t = int(input())
for _ in range(t):
	n = int(input())
	a, b = 1, 1
	c = -2*n
	d = b*b - 4*a*c
	x1 = (-b + sqrt(d))/(2*a)
	x2 = (-b - sqrt(d))/(2*a)
	if x1 > 0 and floor(x1) == x1:
		print('1')
		continue
	if x2 > 0 and floor(x2) == x2:
		print('1')
		continue
	print('0')