/*
Create a class Calculator with static member functions add(), subtract(), multiply(),
and divide(). Each function should take two integers as input and return the result of
the corresponding operation.
*/

#include<iostream>

using namespace std;

class Calculator
{
    public:
        static int add(int a, int b);
        static int subtract(int a, int b);
        static int multiply(int a, int b);
        static int divide(int a, int b);
};

int Calculator::add(int a, int b)
{
    return a+b;
}
int Calculator::subtract(int a, int b)
{
    return a-b;
}
int Calculator::multiply(int a, int b)
{
    return a*b;
}
int Calculator::divide(int a, int b)
{
    return a/b;
}


int main(int argc, char *argv[])
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Sum: " << Calculator::add(a, b) << endl;
    cout << "Difference: " << Calculator::subtract(a, b) << endl;
    cout << "Product: " << Calculator::multiply(a, b) << endl;
    cout << "Quotient: " << Calculator::divide(a, b) << endl;
    return 0;
}