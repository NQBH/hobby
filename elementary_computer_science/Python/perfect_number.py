def is_perfect_number(n):
	sum_proper_divisor = 0
	list_proper_divisor = []
	for i in range(1, round(n/2 + 1)):
		if n % i == 0:
			list_proper_divisor.append(i)
			sum_proper_divisor += i
	if sum_proper_divisor == n:
		list_proper_divisor.append(n)
		print(n, " is a perfect number.")
		print("List of of all divisor of ", n, ":", *list_proper_divisor)
	else:
		print(n, " is not a perfect number.")

n = int(input())
is_perfect_number(n)