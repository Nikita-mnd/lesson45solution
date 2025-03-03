#include <iostream>
#include <string>

using namespace std;

string dividers(int n) {
	if (n == 1) {
		return "1";
	}
	if (n <= 0) {
		return"error";
	}

	string result = "1";
	int num = n / 2;
	for (int div = 2; div <= num; div++) {

		if (n % div == 0) {
			result += " " + to_string(div);
		}

	}
	result += " " + to_string(n);
	return result;
}
