t = int(input())
for _ in range(t):
	n, p = map(int, input().split())
	if n < p:
		print('0')
		continue
	ans = 0
	for i in range(p, n + 1, p):
		x = i
		while x % p == 0:
			ans += 1
			x //= p
	print(ans)