#include <iostream>
using namespace std;

void change(int& a, int& b) {
	int t = a;
	a = b;
	b = t;
}

int main() {
	int value = 5, value2 = 10 ;
	cout << "before: " << value << " "<< value2 << endl;
	change(value,value2);
	cout << "after: " << value << " " << value2 << endl;
	return 0;
}