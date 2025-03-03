#include <iostream>
using namespace std;

int get_fibo_number(int number) {

	if (number <= 3) {
		return number == 1 ? 0 : 1;
	}
	int sum;
	int fibo1 = 0;
	int fibo2 = 1;
	int fibo3 = fibo1 + fibo2;
	int fibo = fibo2 + fibo3;
	for (int i = 0;
		i <= number; i++) {

		sum = fibo + fibo3;
		if (i + 1 < number) {
			swap(sum, fibo);
			swap(fibo, fibo3);
		}

	}
	return sum;
}