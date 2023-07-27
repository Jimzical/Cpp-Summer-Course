// parameter constructor and child class example

// you can use <bits/stdc++.h> instead of including all the libraries
// advantage is that it has all built in libraries
// disadvantage of using this is that it increases the compile time

#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
    string name;
    int id;

public:
    Employee(string name, int id)
    {
        this->name = name;
        this->id = id;
    }
    void display()
    {   
        cout << "Parent" << endl;
        cout << "Name: " << name << " with id: " << id << endl;
    };
};

// creating a child class
class Payment : public Employee
{
private:
    int salary;

public:
    Payment(string name, int id, int salary) : Employee(name, id)
    {
        this->salary = salary;
    }
    void display_payment()
    {   
        cout << "---------------------" << endl;
        cout << "Child" << endl;
        display();
        cout << "Salary:" << salary << endl;
    };
};

int main(int argc, char const *argv[])
{

    Employee e1("John", 10000);
    Employee e2("Tim", 20000);

    Payment p1("John", 10000, 5000);
    Payment p2("Tim", 20000, 10000);

    Payment p3 ("Tom", 30000, 15000);
    
    e1.display();
    e2.display();

    p1.display();
    p1.display_payment();

    p2.display();
    p2.display_payment();

    p3.display();
    p3.display_payment();

    return 0;
}