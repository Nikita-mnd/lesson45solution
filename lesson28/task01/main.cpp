#include <iostream>
#include <ctime>
using namespace std;
string sum();
int main() {
	//srand(time (0));

	//int n = 10;
	//for (int i = 1; i <= n; i++) {
	//	cout << "sum of cube= " << sum() << endl;
	//}

	int start = time(0);

	for (int i = 0; i < 2'000'000'000; i++);

	int end = time(0);

	cout << end - start << " sec." << endl;
	return 0;
}