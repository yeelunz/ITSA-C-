#include<iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout.setf(ios::fixed,ios::floatfield);
    cout.precision(1);
    int a;
    cin >> a;
    cout <<(double)a* 1.6<<endl;
}