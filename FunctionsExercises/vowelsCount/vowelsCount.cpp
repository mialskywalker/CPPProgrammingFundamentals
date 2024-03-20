#include <iostream>
#include <string>
using namespace std;

bool isVowel(char symbol) {
	char lowerSymbol = tolower(symbol);
	return lowerSymbol == 'a' || lowerSymbol == 'e' || lowerSymbol == 'u' || lowerSymbol == 'o' || lowerSymbol == 'i';
}

int countVowels(string text) {
	int count = 0;

	for (int i = 0; i < text.length(); i++)
	{
		if (isVowel(text[i])) {
			count++;
		}
	}
	return count;
}

int main()
{
	string text;
	getline(cin, text);

	cout << countVowels(text) << endl;
}