#include<iostream>
using namespace std;
int main()
{
    int m, j, t;
    char i;
    do
    {
        
        cout<<"1. Bakso (10.000)"<<endl;
        cout<<"2. Mie Ayam (12.000)"<<endl;
        cout<<"Pilih menu : ";
        cin>>m;
        switch (m)
        {
            case 1:
                cout<<"Jumlah pesanan : ";
                cin>>j;
                t=10000*j;
                cout<<"Total pesanan anda adalah : "<<t<<endl;
                break;
            case 2:
                cout<<"Jumlah pesanan : ";
                cin>>j;
                t=12000*j;
                cout<<"Total pesanan anda adalah : "<<t<<endl;
                break;
            default:
                cout<<"Menu yang anda pilih tidak tersedia";
        }
        cout<<"Mau pesen lagi? (Y/N) ";
        cin>>i;
    }
    while(i=='Y' || i=='y');
    return 0;
}