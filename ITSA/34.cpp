#include <iostream>

using namespace std;

int s[7] = {0};

int main()
{
    cout.setf(ios::fixed, ios::floatfield);
    cout.precision(1);
    int a, t;
    while (cin >> a >> t)
    {
        if (t == 1)
        {
            cout << (double)(a - 80) * 0.7<<endl;
        }
        else
        {
            cout << (double)(a - 70) * 0.6<<endl;
        }
    }
}