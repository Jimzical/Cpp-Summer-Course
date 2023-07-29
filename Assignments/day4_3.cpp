/*
Create a vehicle class hierarchy with top most base having the following
specification:
Class vehicle
{
int reg_no;
int cost;
public:
virtual start ()=0;
virtual void stop ();
virtual void show ();
-----
}
Write a complete program having derived classes such as heavy, lightweight vehicle,
etc.
*/

#include <iostream>

using namespace std;

class Vehicle{
protected:
    int reg_no;
    int cost;
public:
    virtual void start() = 0;
    virtual void stop() = 0;
    virtual void show() = 0;
};

class HeavyVehicle: public Vehicle{
public:
    HeavyVehicle(int reg_no, int cost){
        this->reg_no = reg_no;
        this->cost = cost;
    }
    void start(){
        cout << "Heavy Vehicle started" << endl;
    }
    void stop(){
        cout << "Heavy Vehicle stopped" << endl;
    }
    void show(){
        cout << "Heavy Vehicle details: " << endl;
        cout << "Reg No: " << reg_no << endl;
        cout << "Cost: " << cost << endl;
    }
};

class LightVehicle: public Vehicle{
public:
    LightVehicle(int reg_no, int cost){
        this->reg_no = reg_no;
        this->cost = cost;
    }
    void start(){
        cout << "Light Vehicle started" << endl;
    }
    void stop(){
        cout << "Light Vehicle stopped" << endl;
    }
    void show(){
        cout << "Light Vehicle details: " << endl;
        cout << "Reg No: " << reg_no << endl;
        cout << "Cost: " << cost << endl;
    }
};

int main(){
    Vehicle *v1 = new HeavyVehicle(1234, 100000);
    Vehicle *v2 = new LightVehicle(5678, 50000);
    v1->start();
    v1->stop();
    v1->show();
    v2->start();
    v2->stop();
    v2->show();
    return 0;
}