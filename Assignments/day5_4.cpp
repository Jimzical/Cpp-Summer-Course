/*
4) Design a C++ program to read a sequence of numbers from the user until they
enter a negative number. Calculate the average of these numbers and display it.
However, handle the case when the user enters non-numeric input and throw an
exception with a suitable error message.
*/

#include <iostream>

using namespace std;

int main()
{
    int sum = 0;
    int count = 0;
    int number;
    while (true)
    {
        cout << "Enter a number: ";
        cin >> number;
        if (cin.fail())
        {
            cout << "Invalid input!" << endl;
            cin.clear();
            cin.ignore(1000, '\n');
        }
        else if (number < 0)
        {
            break;
        }
        else
        {
            sum += number;
            count++;
        }
    }
    cout << "Average: " << (double)sum / count << endl;
    return 0;
}
