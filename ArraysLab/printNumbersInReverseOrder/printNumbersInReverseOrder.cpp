#include <iostream>
using namespace std;

const int MAX_SIZE = 99;

int main()
{
	int n;
	cin >> n;

	int arr[MAX_SIZE];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	for (int i = n-1; i >= 0; i--)
	{
		cout << arr[i] << " ";
	}
	
}