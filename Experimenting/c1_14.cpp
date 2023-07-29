#include <iostream>
using namespace std;

int main(void){
    double* pval = NULL;
    pval = new double;

    *pval = 2340.35;
    cout << "Value of pVal:" << *pval << endl;


    delete pval;     

    return 0;
}