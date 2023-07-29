/*
Design a class Kilometer to represent distances in kilo meters. Implement a
conversion function that converts Kilometer to miles.
*/

#include<iostream>

using namespace std;

class Kilometer
{
    private:
        float km;
    public:
        Kilometer(float km)
        {
            this->km = km;
        }
        float toMiles();
};

float Kilometer::toMiles()
{
    return km * 0.621;
}

int main(int argc, char *argv[])
{
    float km;
    cout << "Enter distance in kilometers: ";
    cin >> km;
    Kilometer val1(km);
    cout << "Distance in miles: " << val1.toMiles() << endl;
    return 0;
}