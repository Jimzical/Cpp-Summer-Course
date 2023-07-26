#include<iostream>
using namespace std;

class Abc
{
    int i;
    public:
    Abc()
    {
        i=0;
        cout << "constructor   ";
    }
    ~Abc()
    {
        cout << "   destructor" << endl;
    }
};

void f()
{
    static Abc obj;
}

int main()
{
    int x=0;
    if(x==0)
    {
        f();
    }
    cout << "END  ";
	return 0;
}
