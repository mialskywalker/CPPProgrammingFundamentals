#include <iostream>
using namespace std;

void ArrayInitialization(int array[], const int num) {
	for (int i = 0; i < num; i++)
	{
		cin >> array[i];
	}
}

int main()
{
	int array[100], range[10] = {};
	int n;
	cin >> n;

	ArrayInitialization(array, n);
	int mostFrequent = 0;
	for (int i = 0; i < n; i++)
	{
		int num = array[i];
		range[num]++;
		if (range[num] > mostFrequent) {
			mostFrequent = range[num];
		}
	}

	for (int k = 0; k < 10; k++)
	{
		if (range[k] == mostFrequent) {
			cout << k << " ";
		}
	}	
}