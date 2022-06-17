#include<iostream>
#include <iomanip>

using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    int z = x * 100 + y;
    //cout << z;
    if(121<=z && z<=218)
    {
        cout << "Aquarius" << endl;
    }
    else if(219<=z && z<=320)
    {
        cout << "Pisces" << endl;
    }
    else if(321<=z && z<=420)
    {
        cout << "Aries" << endl;
    }
    else if(421<=z && z<=521)
    {
        cout << "Taurus" << endl;
    }
    else if(522<=z && z<=621)
    {
        cout << "Gemini" << endl;
    }
    else if(622<=z && z<=722)
    {
        cout << "Cancer" << endl;
    }
    else if(723<=z && z<=823)
    {
        cout << "Leo" << endl;
    }
    else if(824<=z && z<=923)
    {
        cout << "Virgo" << endl;
    }
    else if(924<=z && z<=1023)
    {
        cout << "Libra" << endl;
    }
    else if(1024<=z && z<=1122)
    {
        cout << "Scorpio" << endl;
    }
    else if(1123<=z && z<=1221)
    {
        cout << "Sagittarius" << endl;
    }
    else if(1222<=z || z<=120)
    {
        cout << "Capricorn" << endl;
    }
}