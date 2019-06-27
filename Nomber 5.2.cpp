#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

char *registr(string str) {
	string &s = str;
	char b[100];
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == 'O' || str[i] == 'U' || str[i] == 'I' || str[i] == 'E' || str[i] == 'A' || str[i] == 'Y') {
			str[i] = tolower(str[i]);
		}
	}
	for (int i = 0; i < str.length(); i++) {
		b[i] = str[i];
	}
	return b;
}

int main() {
	if (strcmp(registr("AoTRJY"), "aoTRJy") || strcmp(registr("ETU"), "eTu") || strcmp(registr(""), "") || strcmp(registr("YEF UIV NAR"), "yeF uiV NaR")) {
		cout << "problem" << endl;
		return 1;
	}
	else {
		cout << "it`s working" << endl;
	}
	return 0;
}
