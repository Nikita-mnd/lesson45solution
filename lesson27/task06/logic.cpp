#include <iostream>
#include <string>
using namespace std;

bool prime_number(int num) {

	for (int i = 2; i < num; i++) {
		if (num % i == 0) {
			return false;
		}
	}
	return true;
}

void get_prime_numbers(int number) {

	for (int i = 2; i <= number; i++) {
		cout << (prime_number(i) == true ? to_string(i)+" " : "");
	}

}

