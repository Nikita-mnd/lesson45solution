#include <iostream>
using namespace std;
void get_prime_numbers(int number);
int main() {

	cout << "input number: ";
	int number;
	cin >> number;
	 get_prime_numbers( number);
	return 0;
}