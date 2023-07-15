t = int(input())
for _ in range(t):
	k = int(input())
	ans = 0
	if k % 2 != 0:
		ans = ((k - 1) // 2)**2
	else:
		ans = k*(k - 2)//4
	print(ans)