/*
Consider an example of declaring examination result. Design three classes: Student,
Exam and Result.
The Student class has data members such as roll_no, name, etc. Create the class
Exam by inheriting Student class. The Exam class adds data members representing
the marks scored in six subjects. Derive the Result from Exam class and it has its
own data members such as total marks. Write an interactive program to model this
relationship.
*/

#include <iostream>

using namespace std;

class Student{
protected:
    int roll_no;
    string name;
public:
    Student(int roll_no, string name){
        this->roll_no = roll_no;
        this->name = name;
    }
    void show(){
        cout << "Student details: " << endl;
        cout << "Roll No: " << roll_no << endl;
        cout << "Name: " << name << endl;
    }
};

class Exam: public Student{
protected:
    int marks[6];
public:
    Exam(int roll_no, string name, int marks[]):Student(roll_no, name){
        for(int i=0; i<6; i++){
            this->marks[i] = marks[i];
        }
    }
    void show(){
        Student::show();
        cout << "Marks: " << endl;
        for(int i=0; i<6; i++){
            cout << "Subject " << i+1 << ": " << marks[i] << endl;
        }
    }
};

class Result: public Exam{
    int total;
public:
    Result(int roll_no, string name, int marks[]):Exam(roll_no, name, marks){
        total = 0;
        for(int i=0; i<6; i++){
            total += marks[i];
        }
    }
    void show(){
        Exam::show();
        cout << "Total: " << total << endl;
    }
};

int main(){
    int roll_no, marks[6];
    string name;
    cout << "Enter roll no: ";
    cin >> roll_no;
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter marks: " << endl;
    for(int i=0; i<6; i++){
        cout << "Subject " << i+1 << ": ";
        cin >> marks[i];
    }
    Result r(roll_no, name, marks);
    r.show();
    return 0;
}