#include <typeinfo>
#include <iostream>
using namespace std;

int function1()
{
    return 23;
}
char function2()
{
    return 'a';
}



int main(void){
    decltype(function1()) x;
    decltype(function2()) y;

    cout << typeid(x).name() << endl;
    cout << typeid(y).name() << endl;


    return 0;
}