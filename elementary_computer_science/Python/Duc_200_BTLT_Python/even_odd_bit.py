t = int(input())
while t != 0:
	t -= 1
	s = 0
	n = int(input())
	while n != 0:
		s += n % 2
		n //= 2
	if s % 2 != 0:
		print('bit odd')
	else:
		print('bit even')