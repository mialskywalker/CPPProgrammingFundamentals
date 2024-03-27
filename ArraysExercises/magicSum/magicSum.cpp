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
	int array[99];
	int n, toFind;
	cin >> n;

	ArrayInitialization(array, n);

	cin >> toFind;

	for (int i = 0; i < n - 1; i++)
	{
		int firstNum = array[i];
		for (int j = i + 1; j < n; j++)
		{
			int secondNum = array[j];
			if (firstNum + secondNum == toFind) {
				cout << firstNum << " " << secondNum << endl;
			}
		}
	}
}