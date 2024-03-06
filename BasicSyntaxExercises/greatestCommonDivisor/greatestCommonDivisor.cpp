#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;

	int maxDivisor = INT8_MIN;

	if (a >= b) {
		for (int i = 1; i <= a; i++)
		{
			if (a % i == 0 && b % i == 0) {
				if (i >= maxDivisor) {
					maxDivisor = i;
				}
			}
		}
	}
	else {
		for (int i = 1; i <= b; i++)
		{
			if (a % i == 0 && b % i == 0) {
				if (i >= maxDivisor) {
					maxDivisor = i;
				}
			}
		}
	}
	cout << maxDivisor;
}