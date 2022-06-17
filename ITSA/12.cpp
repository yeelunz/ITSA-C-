#include<iostream>

using namespace std;


int mfloor(double x)
{
    x = (x==(int) x ? x : (int)x-1) ;
    return x;
}

int rec(int a) 
{ 
    if(a==1 || a==0) 
        return a + 1; 
    return (rec(a - 1) + rec((mfloor(a / 2)))); 
} 
 
 
int main() 
{ 
    int a;
    cin >> a;
    cout << rec(a)<<endl;

}  