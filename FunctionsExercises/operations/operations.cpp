#include <iostream>
using namespace std;

int add(int n1, int n2) {
	return n1 + n2;
}

int subtract(int n1, int n2) {
	return n1 - n2;
}

int multiply(int n1, int n2) {
	return n1 * n2;
}

int divide(int n1, int n2) {
	return n1 / n2;
}

int main()
{
	int n1, n2;
	char operation;
	cin >> n1 >> n2 >> operation;
	
	switch (operation)
	{
	case '+':
		cout << add(n1, n2);
		break;
	case '-':
		cout << subtract(n1, n2);
		break;
	case '*':
		cout << multiply(n1, n2);
		break;
	case '/':
		cout << divide(n1, n2);
		break;
	default:
		break;
	}
}