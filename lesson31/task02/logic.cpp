#include <iostream>
using namespace std;

int max(int* numbers, int size) {

	int max = numbers[0];

	for (int i = 1; i < size; i++) {

		if (numbers[i] > max) {
			max = numbers[i];
		}

	}
	return max;
}

int firstmax(int* numbers, int size) {
	int index = 0;

	for (int i = 1; i < size; i++) {

		if (numbers[i] > numbers[index]) {
			index = i;
		}

	}
	return index;
}

double avg(int* numbers, int size) {


	double sum = 0;

	for (int i = 0; i < size; i++)
	{

		sum += numbers[i];

	}

	return sum / size;
}

double avg2(int* numbers, int size) {


	double sum = 0;

	for (int i = 0; i < size; i++)
	{

		sum += numbers[i];

	}

	return sum / size;
}