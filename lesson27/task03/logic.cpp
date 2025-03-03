#include <iostream>
using namespace std;

bool power_of_two(int number) {

	for (int i = 1; pow(2, i) <= number; i++) {
		if (pow(2, i) == number) {
			return true;
		}
	}
	return false;
}