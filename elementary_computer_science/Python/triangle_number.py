from math import sqrt, floor
t = int(input())
while t != 0:
	t -= 1
	n = int(input())
	# 1st solution. Author: NQBH
	i = 1
	sum = 0
	while sum < n:
		sum += i
		i += 1
	if n == sum:
		print(1)
	else:
		print(0)
	# 2nd solution. Author: NQBH
	tmp = floor(sqrt(2*n))
	if n == tmp*(tmp + 1)/2:
		print(1)
	else:
		print(0)
	# 3rd solution: Nguyen Tien Duc
	a = 1
	b = 1
	c = -2*n
	d = b*b - 4*a*c
	x1 = (-b + sqrt(d))/(2*a)
	x2 = (-b - sqrt(d))/(2*a)
	if x1 > 0 and floor(x1) == x1:
		print(1)
		continue
	if x2 > 0 and floor(x2) == x2:
		print(1)
		continue
	print(0)