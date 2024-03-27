#include <iostream>
#include <math.h>
using namespace std;

void ArrayInitialization(int array[], int num) {
	for (int i = 0; i < num; i++)
	{
		cin >> array[i];
	}
}

int main()
{
	int array[100];
	int n;
	cin >> n;

	ArrayInitialization(array, n);

	for (int i = 0; i < n - 1; i++)
	{
		int maxNum = INT8_MIN;
		if (array[i] > array[i + 1]) {
			int number = array[i];
			for (int j = i + 1; j < n; j++)
			{
				if (array[j] > maxNum) {
					maxNum = array[j];
				}
			}
			if (number > maxNum) {
				cout << number << " ";
			}
		}
	}
	cout << array[n - 1];
}