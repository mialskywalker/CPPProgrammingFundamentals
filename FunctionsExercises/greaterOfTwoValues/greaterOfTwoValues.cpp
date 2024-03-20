#include <iostream>
#include <string>
using namespace std;

int MaxOfInt(const int& one, const int& two) {
	if (one > two) {
		return one;
	}
	return two;
}

char MaxOfChar(const char& one, const char& two) {
	if (one > two) {
		return one;
	}
	return two;
}

string MaxOfString(const string& one, const string& two) {
	if (one > two) {
		return one;
	}
	return two;
}

int main()
{
	string typeOfVariable;
	cin >> typeOfVariable;

	if (typeOfVariable == "int") {
		int a, b;
		cin >> a >> b;
		cout << MaxOfInt(a, b);
	}
	else if (typeOfVariable == "char") {
		char a, b;
		cin >> a >> b;
		cout << MaxOfChar(a, b);
	}
	else if (typeOfVariable == "string") {
		string a, b;
		cin.ignore();
		getline(cin, a);
		getline(cin, b);
		cout << MaxOfString(a, b);
	}
}