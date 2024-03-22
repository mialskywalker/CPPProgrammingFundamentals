#include <iostream>
using namespace std;

int main()
{
	int arr[99];
	int n;
	int evenSum = 0;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		if (arr[i] % 2 == 0) {
			evenSum += arr[i];
		}
	}
	cout << evenSum;
}