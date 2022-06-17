#include <iostream>

using namespace std;

int s[7] = {0};

int money(int a, int b)
{
    if (a == b)
    {
        // s[1]++;
        return 200000;
    }
    else if (a % (int)1e7 == b % (int)1e7)
    {
        // s[2]++;
        return 40000;
    }
    else if (a % (int)1e6 == b % (int)1e6)
    {
        // s[3]++;
        return 10000;
    }
    else if (a % (int)1e5 == b % (int)1e5)
    {
        // s[4]++;
        return 4000;
    }
    else if (a % (int)1e4 == b % (int)1e4)
    {
        // s[5]++;
        return 1000;
    }
    else if (a % (int)1e3 == b % (int)1e3)
    {
        // s[6]++;
        return 200;
    }
    return 0;
}

int main()
{
    int sp, t1, t2, t3;
    cin >> sp >> t1 >> t2 >> t3;
    int tot = 0;
    int times;
    cin >> times;
    int tmp;
    for (int i = 0; i < times; i++)
    {
        cin >> tmp;
        if (tmp == sp)
        {
            tot += 2000000;
            s[0]++;
            continue;
        }

        int max = 0;
        max = money(tmp, t1);
        if (money(tmp, t2) > max)
            max = money(tmp, t2);
        if (money(tmp, t3) > max)
            max = money(tmp, t3);
        // cout << max << endl;
        if (max == 200000)
            s[1]++;
        if (max == 40000)
            s[2]++;
        if (max == 10000)
            s[3]++;
        if (max == 4000)
            s[4]++;
        if (max == 1000)
            s[5]++;
        if (max == 200)
            s[6]++;
        tot += max;
    }

    for (int i = 0; i < 6; i++)
    {
        cout << s[i] << " ";
    }
    cout << s[6] << endl;
    cout << tot << endl;
}