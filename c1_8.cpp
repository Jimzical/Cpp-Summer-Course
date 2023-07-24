#include <iostream>
using namespace std;

int default_func(int a , int b, int c = 6){
    cout<<"a "<<a<<"\nb "<<b<<"\nc "<<c<<"\n------------------\n";
    return 0;
};

int main(){
    default_func(23,55);
    default_func(23, 55, 8978979);
    

    return 0;
}