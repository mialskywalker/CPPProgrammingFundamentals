#include <iostream>
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

	for (int i = 0; i < n; i++)
	{
		for (int k = 0; k < n; k++)
		{
			cout << array[i] * array[k] << " ";
		}
	}
}