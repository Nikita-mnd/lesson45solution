#include <iostream>
using namespace std;

int basic_linear(int* m, int size, int value) {


	for (int i = 0; i < size; i++) {

		if (value == m[i]) {
			return i + 1; 
		}

	}

	return -1;
}

bool search_basic_linear(int* m, int size, int value) {


	for (int i = 0; i < size; i++) {

		if (value == m[i]) {
			return true;
		}

	}

	return false;
}

int searchlastindex(int* m, int size, int value) {



	for (int i = size - 1; i >= 0; i--) {

		if (value == m[i]) {
			return i ;
		}

	}

	return -1;


}

int num(int* m, int size, int value) {
	int num = 1;
	for (int i = 0; i <= size; i++) {

		if (value = m[i]) {
			 num += 1;
		}

	}
	return num;
}