#include <iostream>
using namespace std;

class A {
	int i;
public:
	A(int );
};

A::A(int arg) {
	i = arg;
	cout << "A's Constructor called: Value of i: " << i << endl;
}

// Class B contains object of A
class B {
	A a;
public:
	B(int );
};

B::B(int x):a(x) { //Initializer list must be used
	cout << "B's Constructor called";
}

int main() {
	//A a1; 
	A a2(20);
	B obj(10);
	return 0;
}
