t = int(input())
for _ in range(t):
	s = int(1e10)
	a1 = b1 = -1
	n, a, b = map(int, input().split())
	if a*b >= 6*n:
		print(a*b)
		print(a, b)
	else:
		n *= 6
		sw = False
		if a > b:
			a, b = b, a
			sw = True
		i = a
		while i*i <= n:
			j = n // i
			if n % i != 0:
				j += 1
			if j < b:
				j = b
			if s > i*j:
				s = i*j
				a1, b1 = i, j
			i += 1
		if sw:
			a1, b1 = b1, a1
		print(s)
		print(a1, b1)