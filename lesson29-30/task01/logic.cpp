#include <iostream>
using namespace std;

double calculate_avg_mark(int mark1, int mark2, int mark3, int mark4)
{
	double s = mark1 + mark2 + mark3 + mark4;
	return s / 4;	
}