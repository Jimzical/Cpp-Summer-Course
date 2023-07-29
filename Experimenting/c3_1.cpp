#include <iostream>
using namespace std;

class Box{
    private:
        int lenght;
    public:
        Box(): lenght(0){};
    friend int printLenght(Box);
};

int printLenght(Box b){
    b.lenght += 10;
    return b.lenght;
}

int main(int argc, char const *argv[]){
    
    Box b;
    cout << "Lenght of Box: " << printLenght(b) << endl;

    return 0;
}