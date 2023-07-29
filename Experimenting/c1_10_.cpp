#include <iostream>
using namespace std;

template <typename T> T FindMax(T item1, T item2){
    return ( item1 > item2) ? item1 : item2;
}




int main(int argc, char **argv){
    cout << FindMax<int>(3,5) << endl;
    cout << FindMax<float>(33.4,5.2) << endl;
    cout << FindMax<char>('v','a') << endl;


    return 0;
}

