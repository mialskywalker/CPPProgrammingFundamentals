#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	cin >> n;

	string number = to_string(n);
	int result = 0;

	for (int i = 0; i < number.length(); i++)
	{
		int num = int(number[i]) - 48;
		int numberToAdd = 1;
		for (int k = 1; k <= num; k++)
		{
			numberToAdd *= k;
		}
		result += numberToAdd;
	}

	if (n == result) {
		cout << "yes";
	}
	else {
		cout << "no";
	}

}