from math import sqrt
from math import floor
def is_prime(x):
	if x == 1:
		return 0
	for i in range (2, int(sqrt(x)) + 1):
		if x % i == 0:
			return 0
	return 1

t = int(input())
for i in range(t):
	n = int(input())
	if n % 2 != 0 and is_prime(n - 2) == 1:
		print(n, " = 2 + ", n - 2)
	else:
		for j in range(3, floor(n/2)):
			if is_prime(j) == 1 and is_prime(n - j) == 1:
				print(n, " = ", j, " + ", n - j)
				# break # if want only 1 representation