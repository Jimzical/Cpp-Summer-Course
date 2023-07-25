#include <iostream>
#include <string>
using namespace std;

int a=100;
int main(int argc, char const *argv[]){
    int srn;
    int a = 200;
    char name[80];
    cout << "Enter SRN:";
    cin >> srn;
    // ignore(1000,"\n"); // just gives an error, not sure why
    // cin.getline(name,100); //dunno what getline does, or rather i dont think its working in the way i think it should work

    cout << "Entered SRN is: " << srn << endl;
    cout << "Entered Name is: " << name << endl;
    cout <<:: a << endl;  // gives global a
    cout << a << endl;
    return 0;
}