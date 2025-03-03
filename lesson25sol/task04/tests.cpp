//#include <iostream>
//#include <string>
//
//using namespace std;
//
//string dividers(int n) {
//	if (n == 1) {
//		return "1";
//	}
//	if ( n <= 0) {
//		return"error";
//	}
//
//	string result = "1";
//	int num = n / 2;
//	for (int div = 2; div <= num; div++) {
//
//		if (n % div == 0) {
//			result += " " + to_string(div);
//		}
//
//	}
//	result += " " + to_string(n);
//	return result;
//}
//
//void print(int n, bool result) {
//
//	cout << "number = " << n << "\t-->" << 
//		(result ? "pass :)" : "fail :(")<<endl;
//
//}
//
//void test01() {
//	int n = -1;
//	string expected = "error";
//	string actual = dividers(n);
//	print(n, expected == actual);
//}
//
//void test02() {
//	int n = 0;
//	string expected = "error";
//	string actual = dividers(n);
//	print(n, expected == actual);
//}
//
//void test03() {
//	int n = 1;
//	string expected = "1";
//	string actual = dividers(n);
//	print(n, expected == actual);
//}
//
//void test04() {
//	int n = 2;
//	string expected = "1 2";
//	string actual = dividers(n);
//	print(n, expected == actual);
//}
//
//void test05() {
//	int n = 3;
//	string expected = "1 3";
//	string actual = dividers(n);
//	print(n, expected == actual);
//}
//
//void test06() {
//	int n = 24;
//	string expected = "1 2 3 4 6 8 12 24";
//	string actual = dividers(n);
//	print(n, expected == actual);
//}
//
//void test07() {
//	int n = 11;
//	string expected = "1 11";
//	string actual = dividers(n);
//	print(n, expected == actual);
//}