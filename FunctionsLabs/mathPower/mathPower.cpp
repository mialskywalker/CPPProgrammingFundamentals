#include <iostream>
#include <cmath>
using namespace std;

int powerOf(int num, int power) {
	return pow(double(num), double(power));
}

int main()
{
	int n, p;
	cin >> n >> p;

	cout << powerOf(n, p);
}