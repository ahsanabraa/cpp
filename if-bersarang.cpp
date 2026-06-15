#include<iostream>
using namespace std;
int main()
{
    int a, b ,c;

    cout<<"Angka Tertinggi";
    cout<<"\n===============";
    cout<<"\n\nMasukkan Angka Pertama : ";cin>>a;
    cout<<"Masukkan Angka Kedua : ";cin>>b;
    cout<<"Masukkan Angka Ketiga : ";cin>>c;

    if(a>b)
    {
        if(a>c)
        cout<<"\nAngka Tertinggi Adalah "<<a<<endl;
        else
        cout<<"\nAngka Tertinggi Adalah "<<c<<endl;
    }
    else if(b>c)
    {
        if(b>a)
            cout<<"\nAngka Tertinggi Adalah "<<b<<endl;
        else
            cout<<"\nAngka Tertinggi Adalah "<<a<<endl;
    }
    else if(c>a)
    {
        if(c>b)
            cout<<"\nAngka Tertinggi Adalah "<<c<<endl;
        else
            cout<<"\nAngka Tertinggi Adalah "<<b<<endl;
    }
    else
        cout<<"\nKetiga Angka Tersebut Sama"<<endl;

    return 0;
}
