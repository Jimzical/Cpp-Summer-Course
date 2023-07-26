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

        
};

int main(int argc, char const *argv[]){


    return 0;
} 