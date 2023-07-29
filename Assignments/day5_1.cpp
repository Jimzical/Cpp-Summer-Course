/*
1) Create a class called &quot;Engine&quot; with a private member variable &quot;horsepower&quot;
(an integer). Then, create a class called &quot;Car&quot; that has a private member variable
&quot;engine&quot; of type &quot;Engine&quot;. Add a method in the &quot;Car&quot; class called &quot;start&quot; that
prints &quot;Car started!&quot; along with the horsepower of the car&#39;s engine. Create
appropriate constructors and other methods as needed.
*/

#include <iostream>
using namespace std;

class Engine
{
private:
    int horsepower;

public:
    Engine(int hp)
    {
        horsepower = hp;
    }
    int getHorsepower()
    {
        return horsepower;
    }
};

class Car
{
private:
    Engine engine;

public:
    Car(int hp) : engine(hp)
    {
    }
    void start()
    {
        cout << "Car started! " << engine.getHorsepower() << " horsepower." << endl;
    }
};

int main()
{
    Car car(100);
    car.start();
    return 0;
}
