#include <iostream>
#include <string>
using namespace std;

bool checkLength(string text) {
	if (text.length() < 6 || text.length() > 10) {
		return false;
	}
	return true;
}

bool checkDigitsLength(string text) {
	int count = 0;
	for (int i = 0; i < text.length(); i++)
	{
		if (isdigit(text[i])) {
			count++;
		}
	}
	if (count >= 2) {
		return true;
	}
	else {
		return false;
	}
}

bool checkLettersAndDigits(string text) {
	bool isTrue = false;
	for (int i = 0; i < text.length(); i++)
	{
		if (isdigit(text[i]) || isalpha(text[i])) {
			isTrue = true;
		}
		else {
			isTrue = false;
			break;
		}
	}
	return isTrue;
}

int main()
{
	string password;
	cin >> password;

	if (!checkLength(password)) {
		cout << "Password must be between 6 and 10 characters" << endl;
	}
	if (!checkLettersAndDigits(password)) {
		cout << "Password must consist only of letters and digits" << endl;
	}
	if (!checkDigitsLength(password)) {
		cout << "Password must have at least 2 digits" << endl;
	}

	if (checkLength(password) && checkLettersAndDigits(password) && checkDigitsLength(password)) {
		cout << "Password is valid" << endl;
	}


}