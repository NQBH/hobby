t = int(input())
for _ in range(t):
	x, y, n = map(int, input().split())
	if n % 2 !=  0:
		x *= 2
	print(max(x, y) // min(x, y))