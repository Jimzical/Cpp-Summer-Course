#include <iostream>
using namespace std;

int main(int argc, char **argv){
    auto greet = [](){
        cout << "HI";
    };

    auto adding = [](int a, int b) {
        cout << a +b <<endl;
    };

    auto opp = [](int a, int b = 1) ->float{
        return a + b;
    };
    greet();
    adding(2,3);
    cout << opp(3);

    return 0;
}