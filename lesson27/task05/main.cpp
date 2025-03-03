#include <iostream>
using namespace std;
int get_fibo_number(int number);
int main() {

	cout << "iput number: ";
	int number;
	cin >> number;

	cout << get_fibo_number( number);

	return 0;
}