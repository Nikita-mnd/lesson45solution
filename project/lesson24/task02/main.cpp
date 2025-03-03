#include <iostream>
#include <string>
using namespace std;

string test(int number);

int main() {
	int number;
	cout << "input number: ";
	cin >> number;
	
	cout << test(number);


	return 0;
}