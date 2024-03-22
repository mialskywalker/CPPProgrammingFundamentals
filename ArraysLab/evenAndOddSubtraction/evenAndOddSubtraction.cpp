#include <iostream>
using namespace std;

int main()
{
	int arr[99];
	int n;
	cin >> n;
	int evenSum = 0;
	int oddSum = 0;

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];

		if (arr[i] % 2 == 0) {
			evenSum += arr[i];
		}
		else {
			oddSum += arr[i];
		}
	}

	cout << evenSum - oddSum;
}