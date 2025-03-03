#include "util.h"
#include "logic.h"

void print(int* m, int size, string test, bool result) {

	cout << test << endl;
	cout << "test array: " << convert(m, size);
	cout << "result: " << (result ? "pass" : "fail") << endl;

}

void test_positiv() {

	int vector[]{ 3,7,6,4,7,2,34,5,7,1 };
	int size = 10;
	int expected = 12;

	int actual = sum(vector, size);

	print(vector, size, "test_positiv", expected == actual);
}