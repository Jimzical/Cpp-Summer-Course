/*
Write a program in C++ to convert a decimal number into binary without using an array with a friend function.
*/

#include<iostream>

using namespace std;

class Binary
{
    private:
        int num;
        int binary_version = 0;
    public:
        // constriuctor
        Binary(int n)
        {
            num = n;
        }
        void convert();
        friend void display(Binary);
};

void Binary::convert()
{
    int remainder, i=1;
    // convert to binary
    while(num != 0)
    {
        remainder = num % 2;
        num /= 2;
        binary_version += remainder * i;
        i *= 10;
    }
    
    // num = binary_version;
}

void display(Binary b)
{
    cout << "Binary: " << b.binary_version << endl;
}

int main(int argc, char *argv[])
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    Binary b(n);
    b.convert();
    display(b);
    return 0;
}
