t = int(input())
for _ in range(t):
	s = 0
	n = int(input())
	while n:
		s += n % 2
		n //= 2
	if s % 2 != 0:
		print('odd')
	else:
		print('even')