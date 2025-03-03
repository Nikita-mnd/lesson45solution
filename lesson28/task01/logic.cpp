#include <iostream>
#include <string>
using namespace std;

int random(int a, int b) {
	return rand() % (b - a + 1) + a;
}

string sum() {

	int cube2, cube1;
	cube1 = random(1, 6);
	cube2 = random(1, 6);
	return to_string(cube1 + cube2 );
}