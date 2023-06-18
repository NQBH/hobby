def sqrt(x,n):
	if x in [0,1]:
		return str(x)
	elif x<1:
		return 'ERROR'	
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
def rut_gon(a,b):
	x,y = a,b
	while a != b:
		if a > b:
			a -= b
		else:
			b -= a
	x,y = x//a,y//a
	return f'{x} {y}' 
x = 'sqrt[2](1.(3))'#int(input())
n = 3#int(input())
ans = 'a'
b = 1
if 'sqrt' in x:
	n *= int(x[x.index('[')+1:x.index(']')])
	x = x[x.index('(')+1:len(x)-1]
if '.' in x:
	dot = x.index('.')
	if '(' in x:
		bf_dot = int(x[:dot])
		Parenthesis = x.index('(')
		org_a = x[Parenthesis+1:len(x)-1]
		a = int(org_a)
		if a == 9:
			print(1)
			exit()
		b = 9
		if x[dot+1] == '(':
			for i in range(len(org_a)-1):
				b = b*10 + 9
		else:
			Temp = x[dot+1:Parenthesis]
			a = a + int(Temp)*(10**len(str(a))) - int(Temp)
			for i in range(len(org_a)-len(Temp)-1):
				b = b*10 + 9
			b *= (10**len(Temp))
		a += bf_dot*b
	else:
		af_dot = len(x[dot+1:])
		a = int(x.replace('.',''))
		b = 10**af_dot
	a,b = map(int,rut_gon(int(a),int(b)).split())
	if b == 1 :
		ans = str(sqrt(a,n))
	else:
		ans = str(sqrt(a,n))+' / '+str(sqrt(b,n))
else:
	ans = sqrt(int(x),n)
print(ans)