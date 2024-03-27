#include <iostream>
#include <limits.h>
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

	int closest;

	if (n == 1) {
		closest = 0;
	}
	else {
		closest = INT_MAX;
		for (int i = 0; i < n - 1; i++)
		{
			for (int k = i + 1; k < n; k++)
			{
				closest = min(closest, abs(array[i] - array[k]));
			}
		}
	}

	cout << closest;

}