#include <iostream>
#include <vector>
using namespace std;

int main(void){
    vector<int> nums;
    int temp;
    for (int i = 0; i < 10; i++)
    {
        cout << "ENTER: ";
        cin >> temp;
        nums.push_back(temp);
    }
    
    cout << " Size: " << nums.size() << endl;
    for(int num:nums){
        cout << num << " ";
    }
    
    
    return 0;
}