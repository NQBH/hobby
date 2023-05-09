from math import *
a = int(input("Enter an integer a: "))
b = int(input("Enter an integer b: "))
sum = 0
s = ""
# Function: Check prime 
def is_prime(x):
	if x == 1:
		return 0
	for i in range (2, int(sqrt(x)) + 1):
		if x % i == 0:
			return 0
	return 1

for i in range (a, b + 1):
	if is_prime(i): sum += i
	if i % 5 == 0: s += str(i) + ", "
print(sum)
print(s[:len(s) - 2])