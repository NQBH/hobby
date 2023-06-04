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
// A pointer can be implicitly converted to a bool. A non-null pointer converts to true; pointers with value nullptr convert to false
void pointer_bool_converter(int* p) {
	bool b = p; // narrows to true or false
	bool b2 {p != nullptr}; // explicit test against nullptr
	if (p) { // equivalent to p != nullptr
		// ...
	}
}

int main(){
	
	return 0;
}