#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 int main()
{
   
   /*cout << "Hello World!" << endl;
   return 0;
}*/

	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int f = accumulate(arr, arr + 10, 1, [](int i, int j)
    {
        return i * j;
    });
 
    cout << "Factorial of 10 is : " << f << endl;
	return 0;
}