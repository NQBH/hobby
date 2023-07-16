def gcd(a, b):
	while a % b:
		r = a % b
		a = b
		b = r
	return b
t = int(input())
for _ in range(t):
	m, n, a, b = map(int, input().split())
	if m > n:
		print('0')
	else:
		ba = n // a - max(0, m - 1) // a
		bb = n // b - max(0, m - 1) // b
		bc = a*b // gcd(a,b)
		bab = n // bc - max(0, m - 1) // bc
		print(ba + bb - bab)