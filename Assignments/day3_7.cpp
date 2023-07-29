/*
Define Student (Students information) and Grade (Subjects and marks details) classes
with necessary members. Create function(s) which is a friend of both classes to
display complete information of student’s personal information with the grade he /
she has obtained.
*/

#include <iostream>
#include <string>

using namespace std;

class Student{
    private:
        int roll;
    public:
        Student(int roll){
            this->roll = roll;
        }
        friend class Grade;
};

class Grade{
    private:
        string subject_name;
        int marks;
    public:
        Grade(string subject_name, int marks){
            this->subject_name = subject_name;
            this->marks = marks;
        }
        void display(Student s){
            cout << "Roll No: " << s.roll << endl;
            cout << "Subject Name: " << subject_name << endl;
            cout << "Marks: " << marks << endl;
        }
};

int main(int argc, char const *argv[]){
    
    Student s(1);
    Grade g("Maths", 100);

    g.display(s);

    return 0;
}