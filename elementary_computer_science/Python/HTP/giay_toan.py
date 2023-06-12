def sqrt(x,n):
	for k in range(n,1,-1):
		if n%k == 0:
			for i in range(int((x//2)**(1/k))+2,1,-1):
				if x%(i**k) == 0:
					if k == n:
						if x == i**k:
							return str(i)
						else:
							return f'{i}sqrt[{n}]({x//(i**k)})'
					else:
						return f'sqrt[{n//k}]({i})'
					exit()
	return f'sqrt[{n}]({x})'
x = int(input())
n = int(input())
print(sqrt(x,n))