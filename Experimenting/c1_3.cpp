#include <iostream>
using namespace std;

namespace ns{    
    void func1(){
        cout << "func1 executed" << endl;
    }

    class Printer{
        public:
            void func2(){
                cout << "func2 executed" << endl;
            };
    };
}

namespace outer_ns
{
    namespace inner_ns
    {
        int value(){
            return 5;
        }
    } // namespace inner_ns
} // namespace outer_ns


void ns::func1(){
    cout << "func1 exceuted" << endl;
}

void ns::Printer::func2(){
    cout << "func2 exceuted" << endl;
}

// driver code
int main(){
    // creating object of namespace
    ns::Printer obj;
    // excecute func1
    ns::func1();
    // excecute func2
    obj.func2();

    return 0;
}