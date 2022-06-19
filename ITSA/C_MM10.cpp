
#include<iostream>  
#include <iomanip>  

  
using namespace std;  
  
int main()  
{  
    cout.setf(ios::fixed,ios::floatfield);  
    cout.precision(1);  
    double a,b;  
    cin >> a;  
    // if(a>31)
    // {
    //     cout << "Value of more than 31\n";
    //     return 0;
    // }
    cout << (a*9/5)+32 << endl;
}  