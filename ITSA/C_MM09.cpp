
#include<iostream>  
#include <iomanip>  
#include <cmath>  

  
using namespace std;  
  
int main()  
{  
    // cout.setf(ios::fixed,ios::floatfield);  
    // cout.precision(1);  
    int a,b;  
    cin >> a;  
    if(a>31)
    {
        cout << "Value of more than 31\n";
        return 0;
    }
    cout << (int)pow(2, a) << endl;
}  