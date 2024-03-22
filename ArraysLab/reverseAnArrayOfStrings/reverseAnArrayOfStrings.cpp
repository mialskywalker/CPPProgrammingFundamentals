#include <iostream>
using namespace std;

int main()
{
	string arr[99];
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < n / 2; i++)
	{
		string temp = arr[i];
		arr[i] = arr[n - i - 1];
		arr[n - i - 1] = temp;
	}

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
}