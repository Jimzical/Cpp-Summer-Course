// create an employee class with required members
// create another class called payroll for the payment of the employees, implement this using friend class or friend fucntion.
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
            cout << "Name: " << e.name << endl;
            cout << "Salary: " << e.salary << endl;
        }
};

int main(int argc, char const *argv[]){
    
    Employee e1("John", 10000);
    Employee e2("Tim", 20000);

    Payroll p;
    p.pay(e1);
    p.pay(e2);


    return 0;
} 