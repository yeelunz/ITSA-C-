#include <iostream>

using namespace std;


int main()
{
    unsigned long long a;
    cin >> a;
    //int s = 0;
    for (int i = a-1;i!=0;i--)
    {
        a *= i;
    }
    cout << a << endl;
}