#include <iostream>

using namespace std;

int main()
{
    // Get data from user
    int number;
    cout << "Please enter an integer: ";
    cin >> number;

    // Apply some arithmetic based on odd/even orientation until reaching the sequence 4-2-1
    // Manipulate the number until it evaluates to 4 in the sequence
    while (number != 4)
    {
        if (number % 2 == 0) number /= 2;
        else if (number % 2 != 0)
        {
            number *= 3;
            number += 1;
        }
    }

    // Manipulate the number until it evaluates to 2 in the sequence
    while (number != 2)
    {
        if (number % 2 == 0) number /= 2;
        else if (number % 2 != 0)
        {
            number *= 3;
            number += 1;
        }
    }

    // Manipulate the number until it evaluates to 1 in the sequence
    while (number != 1)
    {
        if (number % 2 == 0) number /= 2;
        else if (number % 2 != 0)
        {
            number *= 3;
            number += 1;
        }
    }

    return 0;
}
