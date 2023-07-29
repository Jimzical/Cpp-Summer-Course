/*
C++ program to implement a class Student with static member totalStudents to keep
track of the total number of students. Ensure that each time a student object is created
or deleted; the totalStudents count is updated accordingly. [Hint: Use static variable,
object and function]
*/

#include<iostream>

using namespace std;

class Student
{
    private:
        int roll;
        // CAN'T INITIALIZE STATIC VARIABLE HERE
        static int totalStudents;
    public:
        Student(int roll_num)
        {
            roll = roll_num;
            totalStudents++;
        }
        ~Student()
        {
            totalStudents--;
        }
        static void displayTotalStudents()
        {
            cout << "Total students: " << totalStudents << endl;
        }
};

// INITIALIZE STATIC VARIABLE
int Student::totalStudents = 0;

int Test(){
    Student s10(10);
    Student::displayTotalStudents();
    return 0;
}

int main(int argc, char *argv[])
{   
    Test();
    Student::displayTotalStudents();
    Student s1(1);
    Student s2(2);
    Student s3(3);
    Student s4(4);
    Student s5(5);
    Student::displayTotalStudents();
    return 0;
}