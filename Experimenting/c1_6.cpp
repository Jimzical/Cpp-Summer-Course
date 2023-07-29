#include <iostream>
using namespace std;


class student{
    static int passing_mark;
};

int student::passing_mark = 33;

int main(void){
    student s1,s2;
    // s1.passing_mark = 40;  // can't access
    cout << "s2";
}