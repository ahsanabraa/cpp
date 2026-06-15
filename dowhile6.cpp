#include<iostream>
using namespace std;
int main()
{
    int i=125, pr;
    string in;
    cout<<"Menampilkan bilangan kelipatan 5 dengan do while"<<endl;
    do
    {
        int i=126, j=1;
        cout<<"Berapa kali perulangan? : ";cin>>pr;
        while (j<=pr);
        {
            cout<<i<<" ";
            i+=5;
            j++;
        }
        cout<<endl;
        cout<<"Input lagi? (y/n) : ";cin>>in;
    }
    while (in=="y" || in=="Y");
    return 0;
}