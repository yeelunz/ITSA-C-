#include <iostream>

using namespace std;


int main()
{
    cout.setf(ios::fixed,ios::floatfield);
    cout.precision(2);
    float x;
    cin >> x;
    float min, max = x;
    for (int i = 0;i<9;i++)
    {
        cin >> x;
        if(x>max)
            max = x;
        if(x<min)
            min = x;
    }
    cout << "maximum:"<< max << endl;
    cout << "minimum:"<< min << endl;
}