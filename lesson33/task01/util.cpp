#include <iostream>
#include <string>
using namespace std;

void util(int* m, int size, int num1, int num2) {

	for (int i = 0; i < size; i++) {

		m[i] = rand() % (num1 - num2 + 1) + num2;

	}

}

string convert(int* m, int size) {

	string s = "";

	for (int i = 0; i < size; i++) {


		s += to_string(m[i]) + " ";
	}
	return s;
}