#include <stdlib.h>
#include <string>
using namespace std;

void init_random(int* numbers, int size, int a, int b) {

	for (int i = 0; i < size; i++) {

		numbers[i] = rand() % (b - a + 1) + a;

	}

}

string convert_to_string(int* numbers, int size) {

	string msg = "";

	for (int i = 0; i < size; i++) {

		msg += to_string(numbers[i]) + " ";
	}


}