// child class with multiple parent classes

#include <iostream>
using namespace std;
class Parent_A{
    public:
        int a = 1;
        Parent_A(){
            cout << "Parent_A Initilized" << endl;
        };
        ~Parent_A(){
            cout << "Parent_A Destroyed" << endl;
        }
};
class Parent_B{
    public:
        int b = 2;
        Parent_B(){
            cout << "Parent_B Initilized" << endl;
        };
        ~Parent_B(){
            cout << "Parent_B Destroyed" << endl;
        }
};
class Parent_C{
    public:
        int c = 3;
        Parent_C(){
            cout << "Parent_C Initilized" << endl;
        };
        ~Parent_C(){
            cout << "Parent_C Destroyed" << endl;
        }
};

class Child: public Parent_A,public Parent_B, public Parent_C{
    public:
        Child(){
            cout << "Child Initilized" << endl;
        };
        void print(){
            cout << "Parent_A: " << a << endl;
            cout << "Parent_B: " << b << endl;
            cout << "Parent_C: " << c << endl;
        }
        ~Child(){
            cout << "Child Destroyed" << endl;
        }
};



int main(int argc, char const *argv[]){
    
    Child chld;
    chld.print();


    return 0;
}