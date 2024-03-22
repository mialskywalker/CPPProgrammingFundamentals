#include <iostream>
using namespace std;

void arrayInitialization(int* customArr, int size) {
	for (int i = 0; i < size; i++)
	{
		cin >> customArr[i];
	}
}

int main()
{
	int arr[99];
	int arr2[99];
	int n;
	cin >> n;
	int sum = 0;

	arrayInitialization(arr, n);
	arrayInitialization(arr2, n);

	for (int i = 0; i < n; i++)
	{
		if (arr[i] == arr2[i]) {
			sum += arr[i];
		}
		else {
			cout << "Arrays are not identical. Found difference at " << i << " index.";
			return 0;
		}
	}

	cout << "Arrays are identical. Sum: " << sum;
}