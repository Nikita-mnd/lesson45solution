#include <iostream>
using namespace std;

double calculate_avg_mark(int mark1, int mark2, int mark3, int mark4);

int main()
{
	int mark1, mark2, mark3, mark4;

	cout << "input mark of 4 student: ";
	cin >> mark1 >> mark2 >> mark3 >> mark4;

	double marks = calculate_avg_mark(mark1, mark2, mark3, mark4);
	cout << marks;

	return 0;
}