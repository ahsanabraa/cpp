#include<iostream>
using namespace std;
int main() {
    int m, j, t;
    char r;
    do {
        cout<<"\n\nList Menu"<<endl;
        cout<<"1. Nasgor"<<endl;
        cout<<"2. Kwetiau"<<endl;
        cout<<"3. Mie goreng"<<endl;
        cout<<"4. Mie rebus"<<endl;
        cout<<"Pilih menu di atas (1-4) ";
        cin>>m;

        switch (m)
        {
        case 1:
            cout<<"Mau pesan berapa porsi? ";
            cin>>j;
            t = j * 15000;
            cout<<"Total pesanan anda adalah "<<t<<endl;
            break;
        case 2:
            cout<<"Mau pesan berapa porsi? ";
            cin>>j;
            t = j * 14000;
            cout<<"Total pesanan anda adalah "<<t<<endl;
            break;
        case 3:
            cout<<"Mau pesan berapa porsi? ";
            cin>>j;
            t = j * 13000;
            cout<<"Total pesanan anda adalah "<<t<<endl;
            break;
        case 4:
            cout<<"Mau pesan berapa porsi? ";
            cin>>j;
            t = j * 12000;
            cout<<"Total pesanan anda adalah "<<t<<endl;
            break;
        default:
            cout<<"Pesanan yang anda pilih tidak tertera di menu";
            break;
        }
        cout<<"Mau pesan lagi? (Y/N) ";
        cin>>r;
    } while(r=='Y' || r=='y');
}