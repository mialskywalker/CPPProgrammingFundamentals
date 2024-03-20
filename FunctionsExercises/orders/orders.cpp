#include <iostream>
using namespace std;

double coffee(int quantity) {
	return quantity * 1.50;
}

double water(int quantity) {
	return quantity * 1.00;
}

double coke(int quantity) {
	return quantity * 1.40;
}

double snacks(int quantity) {
	return quantity * 2.00;
}

int main()
{
	string product;
	int quantity;
	cin >> product >> quantity;

	cout.setf(ios::fixed);
	cout.precision(2);
	if (product == "coffee") {
		cout << coffee(quantity);
	}
	else if (product == "water") {
		cout << water(quantity);
	}
	else if (product == "coke") {
		cout << coke(quantity);
	}
	else if (product == "snacks") {
		cout << snacks(quantity);
	}
}