#include<iostream>
#include <iomanip>

using namespace std;

int main()
{
    int b_hr, b_min;
    int e_hr, e_min;
    cin >> b_hr >> b_min >> e_hr >> e_min;
    int halfHour = ((e_hr*60+e_min)-(b_hr*60+b_min))/30;
    //cout << halfHour << endl;
    int money;
    if(halfHour<2)
    {
        money = halfHour * 30;
    }
    else if(halfHour<4)
    {
        money = (halfHour - 4) * 40 + 120;
    }
    else
    {
        money = (halfHour - 8) * 60 + 280;
    }

    cout << money<<endl;
}