#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int maxNumber = INT8_MIN;
	int minNumber = INT8_MAX;

	for (int i = 0; i < n; i++)
	{
		int number;
		cin >> number;

		if (number >= maxNumber) {
			maxNumber = number;
		}
		if (number <= minNumber) {
			minNumber = number;
		}
	}
	cout << minNumber << " " << maxNumber;
}