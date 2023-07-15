t = int(input())
while t != 0:
	t -= 1
	n, x = map(int, input().split())
	ans = x + 10*(n - 1) - x*n
	if ans < 0:
		ans = 0
	print(ans)