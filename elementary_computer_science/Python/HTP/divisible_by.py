try:
	a = int(input())
	b = int(input())
	if a % b == 0 :
		print(a, ' chia het cho ', b, '.')
	else:
		print(a, ' khong chia het cho ', b, '.')
except:
	print('Day khong phai la 1 so nguyen.')