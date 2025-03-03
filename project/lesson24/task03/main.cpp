#include <iostream>
using namespace std;
int factorial(long long number);
int main() {

	cout << "input number: ";
	long long number;
	cin >> number;


	cout << factorial(number);
	return 0;
}