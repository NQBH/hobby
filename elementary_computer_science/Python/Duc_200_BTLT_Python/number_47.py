def rec(n):
	global a
	if n == 1:
		return 4
	if n == 2:
		return 7
	if a[n] != -1:
		return a[n]
	if n % 2 != 0:
		a[n] = rec(n // 2)*10 + 4
		return a[n]
	else:
		a[n] = rec(n // 2 - 1)*10 + 7
		return a[n]
a = [-1]*100005
t = int(input())
for _ in range(t):
	n = int(input())
	print(rec(n))