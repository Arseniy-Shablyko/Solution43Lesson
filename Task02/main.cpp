#include <iostream>
using namespace std;

void swap(int* a, int* b) {
	int t = *a;
	*a = *b;
	*b = t;
}

int main() {
	int a = 10;
	int b = 77;

	cout << "Before: a = " << a << ", b = " << b << endl;
	swap(a, b);
	cout << "After: a = " << a << ", b = " << b << endl;

	return 0;
}