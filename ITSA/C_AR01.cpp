#include <iostream>
#include <vector>

using namespace std;


int main()
{

    vector<int> a;
    int s;
    while(cin>>s)
    {
        a.push_back(s);
    }
    for (auto i = a.end()-1;a.begin()<=i;i--)
    {
        if(i!=a.begin())
        {
            cout << *i << " ";
        }
        else
        {
            cout << *i << endl;
        }
    }
}