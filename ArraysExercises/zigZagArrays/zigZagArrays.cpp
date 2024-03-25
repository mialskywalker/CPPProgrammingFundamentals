#include <iostream>
using namespace std;

void arrayInitialization(int num, int* arr, int* arr1) {
	for (int i = 0; i < num; i++)
	{
		if (i % 2 == 0) {
			cin >> arr[i] >> arr1[i];
		}
		else {
			cin >> arr1[i] >> arr[i];
		}
	}
}

void arrayPrint(int num, int* arr) {
	for (int k = 0; k < num-1; k++)
	{
		cout << arr[k] << " ";
	}
	cout << arr[num - 1] << endl;
}

int main()
{
	int arr[99], arr1[99];
	int n;
	cin >> n;

	arrayInitialization(n, arr, arr1);
	arrayPrint(n, arr);
	arrayPrint(n, arr1);

}