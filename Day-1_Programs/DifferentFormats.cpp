#include <iostream>
#include <bitset>

using namespace std;

int main ()
{
	int num = 350;

	// Let us display this number in different formats (Dec, Hex and Oct)

	cout << "Decimal val is: " << num << endl;;
	cout << "Hexadecimal value is: " << hex << num << endl;
  	cout << "Hexadecimal value is: " << hex << uppercase << num << endl;
	cout << "Octal value is: " << oct << num << endl;
	bitset<8> binary_value(num);
	cout << "Binary value is: " << binary_value << endl;
	
}

