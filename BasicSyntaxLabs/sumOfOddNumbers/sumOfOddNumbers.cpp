#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int sum = 0;

	for (int i = 1; i < n*2; i++)
	{
		if (i % 2 != 0) {
			cout << i << endl;
			sum += i;
		}
	}
	cout << "Sum: " << sum;
}