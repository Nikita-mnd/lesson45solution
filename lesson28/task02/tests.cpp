#include <iostream>
using namespace std;

string detect_mood() {


	string mood = "";
	int dmood = rand() % 5 + 1;
	switch (dmood)
	{
	case 1: mood += ":0"; break;
	case 2: mood += ":)"; break;
	case 3: mood += ":("; break;
	case 4: mood += ":))"; break;
	case 5: mood += ":/"; break;
	}
	return mood;
}

void print(string name,  bool flag) {

	cout << name << (flag ? "\002 pass " : "\001 fail")
		<< endl;

}

void test_goodmood() {

	string expected = ":)";
	bool flag = false;

	for (int i = 1; i < 10; i++) {

		string actual =  detect_mood();
		if (expected == actual) {
			flag == true;
			break;
		}
	}
	print("test good mood", flag);
}

void test_2() {

	string expected = ":(";
	bool flag = false;

	for (int i = 1; i < 10; i++) {

		string actual = detect_mood();
		if (expected == actual) {
			flag == true;
			break;
		}
	}
	print("test good mood", flag);
}

void test_3() {

	string expected = ":()";
	bool flag = false;

	for (int i = 1; i < 10; i++) {

		string actual = detect_mood();
		if (expected == actual) {
			flag == true;
			break;
		}
	}
	print("test good mood", flag);
}

void test_4() {

	string expected = ":/";
	bool flag = false;

	for (int i = 1; i < 10; i++) {

		string actual = detect_mood();
		if (expected == actual) {
			flag == true;
			break;
		}
	}
	print("test good mood", flag);
}

void test_5() {

	string expected = ":))";
	bool flag = false;

	for (int i = 1; i < 10; i++) {

		string actual = detect_mood();
		if (expected == actual) {
			flag == true;
			break;
		}
	}
	print("test good mood", flag);
}