/*
Create an employee class with required members. Create another class called payroll
to issue the payment for the employees. Write a C++ program to implement this
concept using friend class.
*/

#include <iostream>
using namespace std;

class Employee{
    private:
        // declaring the required members
        string name;
        int salary;
    public:
        // creating a constructor to initialize the values
        Employee(string name, int salary){
            this->name = name;
            this->salary = salary;
        }
        // declaring the friend class
        friend class Payroll;
};


class Payroll{
    public:
        void pay(Employee e){
            cout << "Name: " << e.name << " with Salary: " << e.salary<< endl;
        }
};

int main(int argc, char const *argv[]){
    
    Employee e1("John", 10000);
    Employee e2("Tim", 20000);
    Employee e3("Tom", 30000);

    Payroll p;

    p.pay(e1);
    p.pay(e2);
    p.pay(e3);

    return 0;
} 