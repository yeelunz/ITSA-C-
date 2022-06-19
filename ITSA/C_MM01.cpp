view plainprint?
#include <iostream>  
#include <vector>  
  
using namespace std;  
  
int main()  
{  
    cout.setf(ios::fixed,ios::floatfield);  
    cout.precision(1);  
    double u, d, h;  
    cin >> u >> d >> h;  
    cout << "Trapezoid area:" << (u+d)*h/2.0<< endl;  
}  