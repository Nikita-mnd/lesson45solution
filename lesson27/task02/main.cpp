#include <iostream>
#include <string>
using namespace std;

int main() {
	int number;
	string res = "";

	do {

		cout << "input numbers (input zero to stop): ";
		cin >> number;
		if (number != 0) {
			res = to_string(number) + ", " + res;
		}

	} while (number != 0);
	cout << res;

	return 0;
}