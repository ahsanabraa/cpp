#include<iostream>
using namespace std;
int main()
{
    cout<<"=== Program Pembayaran ===\n";
    int total_belanja;

    cout<<"Masukkan total belanja : ";cin>>total_belanja;

    //menggunakan percabangan if
    if (total_belanja > 100000)
    {
        cout<<"Selamat, anda mendapatkan hadiah!"<<endl;
    }
    cout<<"Terima kasih telah berbelanja di toko kami"<<endl;
    return 0;
}
