#include <iostream>

using namespace std;


int main()
{
    int x;
    cin >> x;
    int tot = 0;
    for (int i = 1;i<=x;i++)
    {
        if(i%3==0)
            tot += i;
    }
    cout<<tot<<endl;
}