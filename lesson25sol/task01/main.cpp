#include <iostream>
using namespace std;
bool prime_number(int n);
int main() {

	cout << "input number: ";
	int n;
	cin >> n;

	string res = prime_number(n) == true ? "true" : "false";
	cout << res;

	return 0;
}