// Namespaces

#include <iostream>
using namespace std;

// first namespace
namespace first_space{
    int m_first = 100;
    void func(){
        cout << "Inside first_space" << endl;
    }
} // namespace first_space

namespace second_space
{
    void func(){
        cout << "Inside second_space" << endl;
    }
} // namespace second_space


int main(){
    int m_first = 200;

    second_space::func();
    cout << "the value of m_first is: " << first_space::m_first << endl;
    cout << "the value of m is: " << m_first << endl;
    return 0;
}