#include <iostream>
using namespace std;

int main() {
	int number = 100;
	int* pointer = &number;

	cout << "Before number = " << number << endl;

	*pointer = *pointer * 5;

	cout << "After number = " << number << endl;

	return 0;
}