#include <iostream>
using namespace std;

void ArrayInitialization(int array[], int num) {
	for (int i = 0; i < num; i++)
	{
		cin >> array[i];
	}
}

int main()
{
	int array[99];
	int n;
	cin >> n;

	ArrayInitialization(array, n);

	int cursor = 0;
	int maxCount = 0, maxSequence = 0;

	while (cursor < n)
	{
		int start = cursor;
		while (cursor + 1 < n && array[cursor] == array[cursor + 1]) {
			cursor++;
		}
		int count = cursor - start + 1;
		if (count >= maxCount) {
			maxCount = count;
			maxSequence = start;
		}
		cursor++;
	}

	for (int i = 0; i < maxCount; i++)
	{
		cout << array[maxSequence + i] << " ";
	}

}