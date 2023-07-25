 #include <iostream>
 #include <string>
 using namespace std;
 
 int main(void){
    // automatically sepereates the int part from the string so 12abc makes s1 12 and s2 abc;
    int s1;
    string s2;
    cout << "Enter a 2 String: ";
    cin>>s1>>s2; 
    cout << "Entered String 1 is: " << s1 << endl;
    cout << "Entered String 2 is: " << s2 << endl;
    return 0;
 }
