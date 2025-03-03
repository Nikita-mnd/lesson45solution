#include "logic.h.cpp"
int random(int a, int b) {
	return rand() % (b - a + 1) + a;
}

string detect_mood() {
	

	string mood = "";
	int dmood = rand()% MOOD_NUMBER + 1;
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