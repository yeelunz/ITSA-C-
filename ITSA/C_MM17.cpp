#include <iostream>

using namespace std;


int main()
{
    int a, b;
    cin >> a >> b;
    int min = a > b ? b : a;
    int fac = 0;
    for (int i = 1;i<=min;i++)
    {
        if(a%i==0&&b%i==0)
        {
            fac = i;
        }
    }
    cout << fac << endl;
}