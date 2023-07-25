#include <iostream>
using namespace std;

class Point{
    private:
        int x, y;
    public:
        Point(int i, int j): x(i), y(j){}  //: x(i), y(j) is initialization list
    
    int getX() const {return x;}
    int getY() const {return y;}
};

int main(int argc, char const *argv[]){


    return 0;
}