#include <iostream>
using namespace std;

string rectangle(int n, int m);

int main() {

	cout << "input n and m: ";
	int n, m;
	cin >> n >> m;

	cout << rectangle(n, m) << endl;

	return 0;
}