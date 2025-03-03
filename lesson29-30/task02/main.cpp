#include <iostream>
using namespace std;


int main()
{
	int mark;
	int count = 0;
	double sum = 0;
	cout << "input mark of 4 student(input -1 to exit): ";
	while (true) {
		cin >> mark;

		if (mark == -1) {
			break;
		}
		if (mark >= 0 && mark <= 10) {
			count++;
			sum += mark;
		}
	}
	double marks = sum / count;
	cout << marks;

	return 0;
}