#include <iostream>
#include <vector>
#include <memory.h> 
using namespace std;

class Time{
    private:
        int hour;
        int mins;
    public:
        Time(){
            hour = 0;
            mins = 0;
        }

        Time(int t){
            cout << "Conversion happening" << endl;
            hour = t / 60;
            mins = t % 60;
        }

        void Display(){
            cout << "Time:" << hour << ":" << mins << endl;
        }

        
};

int main(int argc, char const *argv[]){
    Time T1;
    int dur = 965; 

    T1 = dur; // Conversion constructor is called here
    T1.Display();

    return 0;
} 