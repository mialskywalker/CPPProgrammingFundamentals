#include <iostream>
using namespace std;

void checkNumber(int num)
{

    if (num > 0) {
        cout << "The number " << num << " is positive.";
    }
    else if (num < 0) {
        cout << "The number " << num << " is negative.";
    }
    else {
        cout << "The number 0 is zero.";
    }
}

int main()
{
    int n;
    cin >> n;
    checkNumber(n);
}