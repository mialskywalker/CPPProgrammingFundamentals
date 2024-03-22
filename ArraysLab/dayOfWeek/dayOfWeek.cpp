#include <iostream>
using namespace std;

int main()
{
	int input;
	string days[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
	cin >> input;

	if (input >= 1 && input <= 7) {
		cout << days[input - 1];
	}
	else {
		cout << "Invalid day!";
	}

}