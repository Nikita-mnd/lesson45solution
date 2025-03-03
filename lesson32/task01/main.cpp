#include <iostream>
#include "logic.h"
using namespace std;
int main() {

	int m[]{ 7, 12, 9, 2, 4, 8, 12, 67, 45, 123, 12, 9, 4 };

	int size = sizeof(m) / sizeof(int);
	cout << "input your number: ";
	int value ;
	cin >> value;
	
	cout << basic_linear2(m, size, value)  << endl;

	return 0;
}