#include<iostream>

using namespace std;
int main()  
{  
    int a;
    cin >> a;
    if(3<=a && a<=5)  
    {
        cout << "Spring\n";
    }  
    else if(6<=a && a<=8)  
    {  
        cout << "Summer\n"; 
    }  
    else if(9<=a && a<=11)  
    {  
        cout << "Autumn\n";  
    }  
    else  
    {  
        cout << "Winter\n";
    }  
} 