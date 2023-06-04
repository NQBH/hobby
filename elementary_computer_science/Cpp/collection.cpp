bool is_open(File*);

bool nonzero(int i) {
	bool b {i != 0};
	return b;
}
// Compare 2 integers
bool equal(int a, int b) {
	bool b1 {a == b};
	return b1;
}

bool greater(int a, int b) {
	return a > b;
}
// Compare 2 reals
bool greater(double a, double b) {
	return a > b;
}
