#include <iostream>
using namespace std;

int smallestNumber(int a, int b, int c);

int main()
{
	int first, second, third;
	cin >> first >> second >> third;
	cout << smallestNumber(first, second, third);
}

int smallestNumber(int a, int b, int c)
{
	if (a <= b && a <= c) {
		return a;
	}
	else if (b <= a && b <= c) {
		return b;
	}
	else if (c <= a && c <= b) {
		return c;
	}
}