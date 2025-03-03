#include <iostream>
using namespace std;
bool power_of_two(int number);
int main() {

	cout << "input number: ";
	int number;
	cin >> number;
	
	cout <<  (power_of_two( number)==true?"true":"false");

	return 0;
}