#include <iostream>

using namespace std;

void decCovBin(int a, char *x)
{
    for (int i = 0; i < 8; i++)
    {
        x[8 - i] = a % 2;
        a /= 2;
    }
}

void twoscomple(string &x)
{
}

int main()
{
    char s[9];
    for (int i = 0; i < 9; i++)
        s[i] = '\0';
    decCovBin(65, s);
    cout << s << endl;
}