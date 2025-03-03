#include <iostream>
using namespace std;

int count(int size) {

	int c = 0;

	while (size != 0) {

		size /= 2;
		c++;

	}

	return c;
}

bool binary(int* m, int size, int value) {


	int first = 0;
	int last = size - 1;

	while (first <= last) {

		int mid = (last + first) / 2;
		if (value == m[mid]) {


			return true;
		}
		if (value < m[mid]) {
			last = mid - 1;
		}
		else {

			first = mid + 1;
		}

	}
	return false;
}