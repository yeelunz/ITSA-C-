#include <iostream>
#include <vector>

using namespace std;

int main()
{
    cout.setf(ios::fixed,ios::floatfield);
    cout.precision(1);
    double u, d;
    cin >> u >> d ;
    cout << "" << u*d/2.0<< endl;
}