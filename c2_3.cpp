// struct
#include <iostream>
using namespace std;

struct Rectangle
{
    int width, height;
    // default is public, so not explicitly mentioned
    // this means that the members of the struct can be accessed from outside the struct
    Rectangle(int w, int h) {
        width = w;
        height = h;
    }

    void area() {
        cout << "Area is: " << width * height << endl;
    }
};

int main(int argc, char const *argv[]){
    
    Rectangle r(10,20);
    r.area();


    return 0;
}