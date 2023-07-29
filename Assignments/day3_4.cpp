/*
Define a C++ class to represent a Student. The attributes are: id, name, number of
subjects, marks_per_subject.
The number of subjects varies for each student. (Use dynamic memory allocation to
store marks_per_subject).
Accept data for 'n' students and print the mark list for each student on the screen.
*/

#include<iostream>
#include<string>

using namespace std;

class Student
{
    private:
        int id;
        string name;
        int num_subjects;
        int *marks_per_subject;
    public:
        Student(int i, string n, int num)
        {
            id = i;
            name = n;
            num_subjects = num;
            marks_per_subject = new int[num_subjects];
        }
        void accept();
        void display();
};

void Student::accept()
{
    cout << "Enter marks for " << name << endl;
    for(int i=0; i<num_subjects; i++)
    {
        cout << "Subject " << i+1 << ": ";
        cin >> marks_per_subject[i];
    }
}

void Student::display()
{
    cout << "ID: " << id << endl;
    cout << "Name: " << name << endl;
    cout << "Marks: " << endl;
    for(int i=0; i<num_subjects; i++)
    {
        cout << "Subject " << i+1 << ": " << marks_per_subject[i] << endl;
    }
    cout << endl;
}

int main(int argc, char *argv[])
{
    int n;
    int id;
    string name;
    int num_subjects;

    cout << "Enter number of students: ";
    cin >> n;

    // *s[n] is an array of pointers to Student objects
    Student *s[n];
    // input
    for(int i=0; i<n; i++)
    {
        cout << "Enter details for student " << i+1 << endl;
        cout << "ID: ";
        cin >> id;
        cout << "Name: ";
        cin >> name;
        cout << "Number of subjects: ";
        cin >> num_subjects;
        s[i] = new Student(id, name, num_subjects);
        s[i]->accept();
    }

    // adding segment
    for (int i = 0; i < 20; i++)
    {
        cout << "-";
    }
    cout << endl;

    // display details of all students
    for(int i=0; i<n; i++)
    {
        s[i]->display();
    }
    return 0;
}
