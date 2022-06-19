#include <iostream>
#include <vector>

using namespace std;


int main()
{

    vector<int> a;
    int s;
    int sum = 0;
    while(cin>>s)
    {
        a.push_back(s);
    }
    for (auto i = a.end()-1;a.begin()<=i;i--)
    {
        // if(i!=a.begin())
        // {
        //     cout << *i << " ";
        // }
        // else
        // {
        //     cout << *i << endl;
        // }
        sum += (*i)*(*i)*(*i);
    }
    cout << sum << endl;
}