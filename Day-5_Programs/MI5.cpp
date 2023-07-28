#include<iostream>
using namespace std;

class A
{
int x;
public:
void setX(int i) {x = i;}
void display() { cout << x << endl; }
};

class B: public A
{
public:
B() { setX(10); }
};

class C: public A
{
public:
C() { setX(20); }
};

class D: public B, public C{
	public:
	D(): B(), C() {};
};

int main()
{
	D d;
	d.display();
	return 0;
}
