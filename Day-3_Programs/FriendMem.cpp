#include <iostream>
using namespace std;
 
class A; // forward definition needed
// another class in which function is declared
class B {
public:
    void memberFunction(A& obj);
};
 
// Class A for which friend is declared
class A {
private:
    int private_variable;
 
protected:
    int protected_variable;
 
public:
    A()
    {
        private_variable = 10;
        protected_variable = 99;
    }
 
    // friend function declaration
    friend void B::memberFunction(A&);
};
 
// friend function definition
void B::memberFunction(A& obj)
{
    cout << "Private Variable: " << obj.private_variable
         << endl;
    cout << "Protected Variable: " << obj.protected_variable;
}
 
// driver code
int main()
{
    A object1;
    B object2;
    object2.memberFunction(object1);
 
    return 0;
}