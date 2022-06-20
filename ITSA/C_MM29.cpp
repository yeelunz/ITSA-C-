
#include <iomanip>
#include <iostream>

using namespace std;

bool IsPrime(int n)
{
    if (n < 2)
    {
        return false;
    }

    for (int i = 2; i < n; ++i)
    {
        if (n % i == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int a;
    cin >> a;
    for (int i = a-1;i!=0;i--)
    {
        if(IsPrime(i))
        {
            cout << i << endl;
            return 0;
        }
    }
}
