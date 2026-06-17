#include<iostream>
using namespace std;
int main()
{
    char huruf;
    cout<<"Masukkan huruf tebakan anda : ";
    cin>>huruf;
    while (huruf!='q' && huruf!='Q')
    {
        cout<<"Maaf tebakan anda salah \n";
        cout<<"Masukkan tebakan huruf anda : ";
        cin>>huruf;
    }
    cout<<"Tebakan anda benar!!!";
    return 0;
}