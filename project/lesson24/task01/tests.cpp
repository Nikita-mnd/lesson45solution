#include <iostream>
using namespace std;

bool is_digits_increasing(long long n)
{

	if (n < 0) {
		n = -n;
	}

	if (n < 10) {
		return true;
	}

	int last = 10;

	int digit = 0,digit2 = 0;
	while (n >= 10) {

		int d1 = n % 10;
		n /= 10;

	}
	return true;
}

void print(long long n, bool result) {

	cout << "number = " << n << "\t--> "
		<< (result ? "pass." : "fail.") << endl;


}

void test01() {
	long long n = -123456;
	bool expected = true;
	bool actual = is_digits_increasing(n);
	print(n, expected == actual);
}

void test02() {
	long long n = 123456;
	bool expected = true;
	bool actual = is_digits_increasing(n);
	print(n, expected == actual);
}

void test03() {
	long long n = -612834;
	bool expected = false;
	bool actual = is_digits_increasing(n);
	print(n, expected == actual);
}

void test04() {
	long long n = 1;
	bool expected = true;
	bool actual = is_digits_increasing(n);
	print(n, expected == actual);
}

void test05() {
	long long n = -1;
	bool expected = true;
	bool actual = is_digits_increasing(n);
	print(n, expected == actual);
}

void test06() {
	long long n = -9;
	bool expected = true;
	bool actual = is_digits_increasing(n);
	print(n, expected == actual);
}

void test07() {
	long long n = 12344;
	bool expected = false;
	bool actual = is_digits_increasing(n);
	print(n, expected == actual);
}