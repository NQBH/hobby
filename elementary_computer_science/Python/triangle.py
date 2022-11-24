a = float(input("Enter a number a = "))
b = float(input("Enter a number b = "))
c = float(input("Enter a number c = "))

if (a > 0) and (b > 0) and (c > 0) and (a + b > c) and (b + c > a) and (c + a > b):
	print("{0},{0},{0} are 3 edges of a triangle".format(a).format(b).format(c))
else:
	print("{0},{0},{0} are not 3 edges of a triangle".format(a).format(b).format(c))