#include <iostream>
using namespace std;

int main() {
	int* pointer = new int[5];

	cout << pointer << endl;
	cout << pointer + 1 << endl;
	cout << pointer + 2 << endl;
	cout << pointer + 3 << endl;
	cout << pointer + 4 << endl;

	*(pointer) = 10;
	*(pointer + 1) = 20;
	*(pointer + 2) = 30;
	*(pointer + 3) = 40;
	*(pointer + 4) = 50;

	cout << *(pointer) << " - " << pointer[0] << endl;
	cout << *(pointer + 1) << " - " << pointer[1] << endl;
	cout << *(pointer + 2) << " - " << pointer[2] << endl;
	cout << *(pointer + 3) << " - " << pointer[3] << endl;
	cout << *(pointer + 4) << " - " << pointer[4] << endl;

	return 0;
}