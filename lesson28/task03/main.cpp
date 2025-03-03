#include <iostream>
using namespace std;
bool test01();
bool test02();
int main() {

	cout << (test01() == true ? "true" : "false") << endl;
	cout << (test02() == true ? "true" : "false") << endl;

	return 0;
}