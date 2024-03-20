#include <iostream>
using namespace std;

long calculateFactorial(int n) {
	long result = 1;
	for (int i = 2; i <= n; i++)
	{
		result *= i;
	}
	return result;
}

int main() {
	int a, b;
	cin >> a >> b;

	auto result = 1.0 * calculateFactorial(a) / calculateFactorial(b);

	cout.setf(ios::fixed);
	cout.precision(2);
	cout << result << endl;
}