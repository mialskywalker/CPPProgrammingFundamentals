#include <iostream>
using namespace std;

void checkGrade(double grade);

int main()
{
	double input;
	cin >> input;

	checkGrade(input);
}

void checkGrade(double grade)
{
	if (grade <= 2.99) {
		cout << "Fail";
	}
	else if (3.00 <= grade && grade <= 3.49) {
		cout << "Poor";
	}
	else if (3.50 <= grade && grade <= 4.49) {
		cout << "Good";
	}
	else if (4.50 <= grade && grade <= 5.49) {
		cout << "Very good";
	}
	else if (5.50 <= grade && grade <= 6.00) {
		cout << "Excellent";
	}
}