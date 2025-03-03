#include <iostream>
using namespace std;
int number2(int* m, int size, int value);
int main() {


	int m[50];
	for (int i = 0; i <= 50; i++) {

		m[i] = rand() % 20 + 1;
		cout << m[i] << " ";
	}

	int size = sizeof(m) / sizeof(int);
	
	int value;
		cout << "input your number: " ;
		cin >> value;

	

	cout << (number2( m,  size,  value) == -1 ? "no" : "yes") << endl;


	return 0;
}