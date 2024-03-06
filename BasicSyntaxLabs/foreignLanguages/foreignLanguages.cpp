#include <iostream>
using namespace std;

int main()
{
	string country;
	cin >> country;

	if (country == "USA" || country == "England") {
		cout << "English";
	}
	else if (country == "Spain" || country == "Argentina" || country == "Mexico") {
		cout << "Spanish";
	}
	else {
		cout << "unknown";
	}
}