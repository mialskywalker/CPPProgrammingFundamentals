#include <iostream>
using namespace std;

void triangle(int n);

int main()
{
	int num;
	cin >> num;
	triangle(num);
}

void triangle(int n)
{
	for (int i = 1; i <= n; i++)
	{
		for (int q = 1; q <= i; q++)
		{
			cout << q << " ";
		}
		cout << endl;
	}

	for (int i = n; i >= 1; i--)
	{
		for (int q = 1; q < i; q++)
		{
			cout << q << " ";
		}
		cout << endl;
	}
}