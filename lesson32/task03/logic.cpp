#include <iostream>
using namespace std;

int number2(int* m, int size, int value) {

	int num = 0;
	for (int i = 0; i <= size; i++) {

		if (value == m[i]) {
			num += 1;
		}
		if (num == 2) {
			return i;
		}
	}
	return -1;
}