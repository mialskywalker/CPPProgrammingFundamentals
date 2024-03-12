#include <iostream>
using namespace std;

int rectangleArea(int width, int height) {
	return width * height;
}

int main()
{
	int w, h;
	cin >> w >> h;
	cout << rectangleArea(w, h);
}