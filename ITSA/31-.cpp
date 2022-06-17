#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

const std::vector<std::string> split(const std::string& str, const std::string& pattern) {
    std::vector<std::string> result;
    std::string::size_type begin, end;

    end = str.find(pattern);
    begin = 0;

    while (end != std::string::npos) {
        if (end - begin != 0) {
            result.push_back(str.substr(begin, end-begin)); 
        }    
        begin = end + pattern.size();
        end = str.find(pattern, begin);
    }

    if (begin != str.length()) {
        result.push_back(str.substr(begin));
    }
    return result;        
}

int main()
{
    vector<string> v1;
    string str;


    while (getline(cin,str))
    {
        //v1.push_back(tmp);
        v1 = split(str, " ");
        int flag = 0;

               // cout << "size"<<v1.size() << endl;
        for (auto &s : v1)
        {
            if (count(v1.begin(), v1.end(), s) > v1.size() / 2)
            {
                cout << s << endl;
                flag = 1;
                break;
                //return 0;
            }
        }
        if(flag==0)
        {
            cout << "NO" << endl;
        }
        v1.clear();
    }
}