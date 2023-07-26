#include <iostream>
using namespace std;

class Test{
    int &t;
    public:
        Test(int &t):t(t){}
        int getT(){return t;}
    
};

int main(int argc, char const *argv[]){
    int x = 29;
    Test t1(x);
    cout << t1.getT() << endl;
    x = 34;
    cout << t1.getT() << endl;

    return 0;
}