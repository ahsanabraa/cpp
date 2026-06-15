#include<iostream>
using namespace std;
int main()
{
    int n=1, jum=0, pang;
    cout<<"Perulangan Do While"<<endl;
    do
    {
        pang = n*n;
        cout<<pang;
        cout<<", ";
        jum+=pang;
        n+=3;
    }
    while (n<=10);
    cout<<endl;
    cout<<"Jumlah : "<<jum<<endl;
    return 0;
}