/*
Design a class Instrument with a virtual function play(). Derive two classes Guitar
and Piano from Instrument. Implement the play() function in both derived classes to
play the guitar and the piano sounds.
*/

#include <iostream>

using namespace std;

class Instrument{
public:
    virtual void play() = 0;
};

class Guitar: public Instrument{
public:
    void play(){
        cout << "Guitar playing..." << endl;
    }
};

class Piano: public Instrument{
public:
    void play(){
        cout << "Piano playing..." << endl;
    }
};

int main(){
    Instrument *i;
    Guitar g;
    Piano p;
    i = &g;
    i->play();
    i = &p;
    i->play();
    return 0;
}