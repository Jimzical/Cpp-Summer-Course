// Constants

#include <iostream>
using namespace std;

int main(void){
    const int INTEGER = 128;
    const unsigned int UNSIGNED_INTEGER = 3147483647;
    const long int LONG = 2147483647;
    const unsigned long int UNSIGNED_LONG = 4294967295;
    const short int SHORT = 32767;
    const unsigned short int UNSIGNED_SHORT = 65535;
    const int DEC = 2147483647;
    const int HEX = 0x7FFFFFFF;
    const int OCT = 03777777777;
    const int BIN = 0b1111111;
    
    cout << "INTEGER: " << INTEGER << endl;
    cout << "UNSIGNED_INTEGER: " << UNSIGNED_INTEGER << endl;
    cout << "LONG: " << LONG << endl;
    cout << "UNSIGNED_LONG: " << UNSIGNED_LONG << endl;
    cout << "SHORT: " << SHORT << endl;
    cout << "UNSIGNED_SHORT: " << UNSIGNED_SHORT << endl;
    cout << "DEC: " << DEC << endl;
    cout << "HEX: " << HEX << endl;
    cout << "OCT: " << OCT << endl;
    cout << "BIN: " << BIN << endl;

    return 0;
}