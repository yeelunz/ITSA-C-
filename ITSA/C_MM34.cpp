#include <iostream>

using namespace std;

int main()
{
    int a;
    cin >> a;
    int f = 0;
    for (int i = 1; i <= a; i++)
    {

        if (a % i == 0)
        {
            if (f == 0)
            {
                f = 1;
            }
            else
            {
                cout << " ";
            }
            cout << i;
        }
    }
    cout << "\n";
}