#include<iostream>
using namespace std;
int main()
{
    int x=1;
    while (x<=10)
    {
        if (x>5)
        {
            break;
            cout<<"Baris ke-"<<x<<endl;
            x++;
        }
    }
    cout<<"Ini baris di luar while";
    return 0;
}