#include <iostream>
using namespace std;

int main(void){
    for (int i : {1,2,3,4,5})
    {
        cout << i << " ";
    }
    cout << "\n";
    
    int a[] = {1,2,3,4,5};
    for (int i : a  )
    {
        cout << i << " ";
    }

    cout << "\n";

    for (int i : a)
    {
        cout<<" pesu " << "";
    }
    cout << "\n";
    
    string str = "PESU";
    for (char c: str)
    {
        cout << c << " ";        
    }
    
    return 0;
}
