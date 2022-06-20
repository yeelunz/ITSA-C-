#include <iostream>

using namespace std;


int main()
{
    int a;
    cin >> a;
    if(a%4==0 && a%100!=0)
    {
        cout << "Bissextile Year\n";
    }
    else
    {
        if(a%400==0)
        {
            cout << "Bissextile Year\n";
        }
        else
        {
            cout << "Common Year\n";
        }
    }

}