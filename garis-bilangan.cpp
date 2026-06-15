#include<iostream>
using namespace std;
int main()
{
    int bil;
    cout<<"Masukkan Nilai Bilangan : ";cin>>bil;
    if(bil>0)
        cout<<"\nBilangan tersebut adalah positif"<<endl;
    else if(bil<0)
        cout<<"\nBilangan tersebut adalah negatif"<<endl;
    else
        cout<<"\nBilangan tersebut adalah netral"<<endl;
    return 0;
}
