#include <iostream>
using namespace std;

int power(int x, int n) {

	if ( n < 0) {
		return 0;
	}
	return pow(x, n);
}

void print(string name, int x, int n, int result, bool flag) {
	cout << name << (flag ? " \002 PASS" : " \001 FAIL")
		<< ": with x = " << x << "and n = " << n << " result is " << result << endl;
}
void test01() {
	int x = 2;
	int n = -1;
	int expected = 0;
	int actual = power(x, n);
	print("test01", x, n, actual, expected == actual);
}
void test02() {
	int x = 2;
	int n = 0;
	int expected = 1;
	int actual = power(x, n);
	print("test02", x, n, actual, expected == actual);
}
void test03() {
	int x = 2;
	int n = 3;
	int expected = 8;
	int actual = power(x, n);
	print("test03", x, n, actual, expected == actual);
}
void test04() {
	int x = 3;
	int n = 2;
	int expected = 9;
	int actual = power(x, n);
	print("test04", x, n, actual, expected == actual);
}
void test05() {
	int x = -2;
	int n = 3;
	int expected = -8;
	int actual = power(x, n);
	print("test05", x, n, actual, expected == actual);
}
void test06() {
	int x = -2;
	int n = 2;
	int expected = 4;
	int actual = power(x, n);
	print("test06", x, n, actual, expected == actual);
}
void test07() {
	int x = -2;
	int n = 0;
	int expected = 1;
	int actual = power(x, n);
	print("test07", x, n, actual, expected == actual);
}
void test08() {
	int x = 0;
	int n = 0;
	int expected = 1;
	int actual = power(x, n);
	print("test08", x, n, actual, expected == actual);
}