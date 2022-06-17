#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

std::string toLower(std::string s) {
    std::transform(s.begin(), s.end(), s.begin(),
       [](unsigned char c){ return std::tolower(c); }
    );
    return s;
}

int main()
{
    vector<string> v1;
    string tmp;
    while (cin >> tmp)
    {
        tmp = toLower(tmp);
        if (find(v1.begin(), v1.end(), tmp) == v1.end())
        {
            // no find
            v1.push_back(tmp);
        }
    }
    
    for (vector<string>::iterator i = v1.begin();i!=v1.end();i++)
    {
        if(i==v1.end()-1)
        {
            cout << *i << "\n";
        }
        else
        {
            cout << *i << " ";
        }
    }
}