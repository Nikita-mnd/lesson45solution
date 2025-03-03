#include <iostream>
#include <string>
using namespace std;

string test(int number) {

	string result;

	for (int i = 2; i <= number; i += 2) {

		result += to_string(i) + " ";

	}
	return result;
}