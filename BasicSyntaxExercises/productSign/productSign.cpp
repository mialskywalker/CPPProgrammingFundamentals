#include <iostream>
using namespace std;

int main()
{
	double a, b, c;
	cin >> a >> b >> c;

	if (a * b * c >= 0) {
		cout << "+";
	}
	else {
		cout << "-";
	}
}