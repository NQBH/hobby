file_name = "student_grade.inp"
def input_data(file_name):
	f = open(file_name, encoding = "UTF-8")
	student_name, student_grade = [], []
	for line in f:
		L = line.split()
		student_name.append(L[0])
		student_grade.append(float(L[1]))
	f.close()
	return student_name, student_grade
student_name, student_grade = input_data(file_name)
for i in range(len(student_name)):
	print(student_name[i], student_grade[i])