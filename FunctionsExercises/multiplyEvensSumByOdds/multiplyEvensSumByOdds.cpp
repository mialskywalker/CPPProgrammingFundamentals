#include <iostream>
using namespace std;

int calculateDigitsSum(int number, bool evenDigitsOnly) {
	int sum = 0;
	while (number != 0) {
		int lastDigit = number % 10;
		bool lastDigitIsEven = lastDigit % 2 == 0;
		if (lastDigitIsEven == evenDigitsOnly) {
			sum += lastDigit;
		}

		number /= 10;
	}
	return sum;
}

int main()
{
	int number;
	cin >> number;

	int result = calculateDigitsSum(number, true) * calculateDigitsSum(number, false);
	cout << result << endl;
}