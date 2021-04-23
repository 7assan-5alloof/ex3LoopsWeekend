#include <iostream>

using namespace std;

int process(int);
int main()
{
    // Get data from user
    int number;
    cout << "Please enter an integer: ";
    cin >> number;

    // Apply some arithmetic based on odd/even orientation until reaching the sequence 4-2-1
    int numberUse = number;
    // Manipulate the number until it evaluates to 4 in the sequence
    while (numberUse != 4) numberUse = process(numberUse);
    cout << numberUse;

    // Manipulate the number until it evaluates to 2 in the sequence
    while (numberUse != 2) numberUse = process(numberUse);
    cout << numberUse;

    // Manipulate the number until it evaluates to 1 in the sequence
    while (numberUse != 1) numberUse = process(numberUse);
    cout << numberUse;

    return 0;
}

int process(int x)
{
    if (x % 2 == 0) x /= 2;
    else if (x % 2 != 0)
    {
        x *= 3;
        x += 1;
    }
    return x;
}
