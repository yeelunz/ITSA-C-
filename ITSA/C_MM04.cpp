#include <iostream>
#include <vector>
#include<iomanip>
#include <cmath>


using namespace std;

int main()
{
    cout.setf(ios::fixed,ios::floatfield);
    cout.precision(1);
    double u;
    while (cin >> u )
    {

        cout << setprecision(1) << u*u+0.01 << endl;
    }
}