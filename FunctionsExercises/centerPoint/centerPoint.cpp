#include <iostream>
#include <math.h>
using namespace std;

void coordinates(double x1, double y1, double x2, double y2) {
	double distance1 = sqrt(x1 * x1 + y1 * y1);
	double distance2 = sqrt(x2 * x2 + y2 * y2);
	if (distance1 <= distance2) {
		cout << "(" << x1 << ", " << y1 << ")" << endl;
	}
	else {
		cout << "(" << x2 << ", " << y2 << ")" << endl;
	}
}

int main()
{
	double x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	coordinates(x1, y1, x2, y2);
}