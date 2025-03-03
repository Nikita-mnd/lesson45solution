#include <iostream>
#include "logic.h"
using namespace std;

int main() {


	int m[]{ 2, 4, 4, 7 ,8, 9, 9, 12, 12, 12, 45, 67, 123 };

	int size = sizeof(m) / sizeof(int);
	cout << "input your number: ";
	int value;
	cin >> value;

	cout << count(value) << endl;

	return 0;
}