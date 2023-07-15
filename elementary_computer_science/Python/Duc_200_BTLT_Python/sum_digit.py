def sumdg(n):
	m = 0
	while n:
		m += n % 10
		n //= 10
	return m
t = int(input())
for _ in range(t):
	n = int(input())
	while n > 9:
		n = sumdg(n)
	print(n)