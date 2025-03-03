#include <iostream>
using namespace std;


bool is_digits_count_even(int number) {
	if (number < 0) {
		number *= -1;
	}
	int num;
	for ( num = 0; number != 0; number /= 10) {

		if (number % 10 > 0) {
			num++;
		}

	}
	
	if (num % 2 == 0) {
		return true;
	}
	return false;
}

void print(string name, long long number, int result, bool flag) {
	cout << name << (flag ? " \002 PASS" : " \001 FAIL")
		<< ": with number = " << number << " result is "
		<< (result == 1 ? "true" : "false") << endl;
}
void test01() {
	int number = 2;
	bool expected = false;
	bool actual = is_digits_count_even(number);
	print("test01", number, actual, expected == actual);
}
void test02() {
	int number = -2;
	bool expected = false;
	bool actual = is_digits_count_even(number);
	print("test02", number, actual, expected == actual);
}

void test03() {
	int number = 22;
	bool expected = true;
	bool actual = is_digits_count_even(number);
	print("test03", number, actual, expected == actual);
}
void test04() {
	int number = -22;
	bool expected = true;
	bool actual = is_digits_count_even(number);
	print("test04", number, actual, expected == actual);
}
void test05() {
	int number = 0;
	bool expected = false;
	bool actual = is_digits_count_even(number);
	print("test05", number, actual, expected == actual);
}
void test06() {
	int number = 1234567;
	bool expected = false;
	bool actual = is_digits_count_even(number);
	print("test06", number, actual, expected == actual);
}
void test07() {
	int number = 234567;
	bool expected = true;
	bool actual = is_digits_count_even(number);
	print("test07", number, actual, expected == actual);
}