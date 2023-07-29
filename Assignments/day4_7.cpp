/*
Implement an abstract base class Shape with pure virtual functions draw() and area().
Derive two classes Rectangle and Circle from Shape and implement both functions in
each derived class accordingly.
*/

#include <iostream>

using namespace std;

class Shape {
public:
    virtual void draw() = 0;
    virtual void area() = 0;
};

class Rectangle : public Shape {
public:
    void draw() {
        cout << "Drawing Rectangle" << endl;
    }
    void area() {
        cout << "Area of Rectangle" << endl;
    }
};

class Circle : public Shape {
public:
    void draw() {
        cout << "Drawing Circle" << endl;
    }
    void area() {
        cout << "Area of Circle" << endl;
    }
};

int main() {
    Shape *s;
    Rectangle r;
    Circle c;
    s = &r;
    s->draw();
    s->area();
    s = &c;
    s->draw();
    s->area();
    return 0;
}




