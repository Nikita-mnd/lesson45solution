#include <iostream>
using namespace std;

int min(int* m, int size) {

	int  min = 0,i = 0;
	for (int min2; i <= size; i++) {

		min2 = m[i];
		if (min2 < min) {

			min = min2;

		}

	}

	for (i = 0; i <= size; i++) {

		if (m[i] == min) {

			return i;

		}

	}

}

int max(int* m, int size) {

	int  max = 0, i = 0;
	for (int max2; i <= size; i++) {

		max2 = m[i];
		if (max2 > max) {

			max = max2;

		}

	}

	for (i = 0; i <= size; i++) {

		if (m[i] == max) {

			return i;

		}

	}

}

int sum(int* m, int size) {

	

	int s = max(m, size);
	int s2 = min( m, size);
	int sum = 0;

	for (int i = s2 + 1; i < s; i++) {

		sum += m[i];

	}

	return sum;

}