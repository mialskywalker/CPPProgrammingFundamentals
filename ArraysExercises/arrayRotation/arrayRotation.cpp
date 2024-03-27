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
	int n, rotations;
	cin >> n;

	ArrayInitialization(array, n);

	cin >> rotations;

	rotations %= n;

	for (int i = 0; i < rotations; i++)
	{
		int first = array[0];
		for (int k = 1; k < n; k++)
		{
			array[k - 1] = array[k];
		}
		array[n - 1] = first;
	}

	for (int j = 0; j < n; j++)
	{
		cout << array[j] << " ";
	}
}