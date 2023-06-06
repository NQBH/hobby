# 1st solution
def convert5(n):
	if n == 0:
		return 5
	y = [c for c in n]
	for i in range(len(y)):
		if y[i] == '0':
			y[i] = '5'
	return ''.join(y)
# 2nd solution
def digit_replacement(n):
	ans = ''
	for i in range(len(n)):
		if n[i] == '0':
			ans += '5'
		else:
			ans += n[i]
	return ans
t = int(input())
while t != 0:
	t -= 1
	n = input()
	print(convert5(n))
	print(digit_replacement(n))