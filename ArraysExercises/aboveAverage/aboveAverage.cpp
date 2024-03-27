#include <iostream>
#include <math.h>
using namespace std;

void ArrayInitialization(int array[], int number) {
	for (int i = 0; i < number; i++)
	{
		cin >> array[i];
	}
}

int ArrayAverage(int* array, int number) {
	int average = 0;
	for (int i = 0; i < number; i++)
	{
		average += array[i];
	}
	return floor(average / number * 1.0);
}

int main()
{
	int array[100];
	int n;
	cin >> n;

	ArrayInitialization(array, n);
	int arrayAverage = ArrayAverage(array, n);

	for (int i = 0; i < n; i++)
	{
		if (array[i] >= arrayAverage) {
			cout << array[i] << " ";
		}
	}

}