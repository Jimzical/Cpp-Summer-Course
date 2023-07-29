/*
Create a base class Shape with a virtual destructor. Derive two classes Circle and
Rectangle from Shape. Implement the destructor for each derived class and display a
message when the objects are destroyed.
*/

#include <iostream>

using namespace std;

class Shape {
public:
    virtual ~Shape() {
        cout << "Shape destructor" << endl;
    }
};

class Rectangle : public Shape {
public:
    ~Rectangle() {
        cout << "Rectangle destructor" << endl;
    }
};

class Circle : public Shape {
public:
    ~Circle() {
        cout << "Circle destructor" << endl;
    }
};

int main() {
    Shape *s;
    Rectangle r;
    Circle c;
    s = &r;
    s = &c;
    return 0;
}
