#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n;
	bool even = false;

	while (!even) {
		cin >> n;

		if (n % 2 == 0) {
			cout << "The number is: " << abs(n);
			even = true;
			break;
		}
		else {
			cout << "Please write an even number." << endl;
		}

	}
}