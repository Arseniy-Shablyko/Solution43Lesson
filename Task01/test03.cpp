#include <iostream>
using namespace std;

int main() {
	int* ptrInt = new int;

	*ptrInt = 10;

	cout << "Pointer: " << ptrInt << endl;
	cout << "Value of pointer: " << *ptrInt << endl;

	delete ptrInt;
	return 0;
}