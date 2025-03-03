#include <iostream>
using namespace std;

string rectangle(int n, int m){
	string result = "";
	int minus = n-1;
	for (int y = 1; y <= m; y++) {
		result += "\n*";
		for (int x = 1; x <= minus ; x++) {
			result += y == 1 || y == m ? "*" : " ";
		}
		result += "*";

	}
	return result;
}