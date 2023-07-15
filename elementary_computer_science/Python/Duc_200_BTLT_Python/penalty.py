t = int(input())
for _ in range(t):
	cx, cy = 0, 0
	x, y, z = map(int, input().split())
	while x and y and z > 1:
		if x % z == 0:
			x -= 1
			cx += 1
		elif y % z == 0:
			y -= 1
			cy += 1
		else:
			z -= 1
	print(cx, cy)