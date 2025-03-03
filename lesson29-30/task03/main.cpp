#include <iostream>
using namespace std;
double calculate_avg_mark(int* marks, int count);
#define SIZE 100 

int main()
{
	
	int count;
	cout << "input students marks ";
	cin >> count;
	cout << "input marks: ";
	int marks[SIZE];
	
	for (int i = 0; i <= count; i++) {
		int mark;
		cin >> mark;
		marks[i] = mark;
	}

	cout <<  calculate_avg_mark( marks,  count);

	return 0;
}