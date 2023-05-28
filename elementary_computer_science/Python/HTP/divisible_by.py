try:
	a = int(input('Nhap a = '))
	b = int(input('Nhap b = '))
	if a%b == 0 :
		print(str(a) + ' chia het cho ' + str(b))
	else:
		print(str(a) + ' khong chia het cho ' + str(b))
except:
	print('Day khong phai la 1 so nguyen.')