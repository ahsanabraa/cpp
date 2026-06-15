#include<iostream>
using namespace std;
int main()
{
    string password;
    cout<<"===== Login ====="<<endl;
    cout<<"Masukkan Password : ";cin>>password;

    //percabangan if else
    if(password=="kopi")
    {
        cout<<"Selamat datang bos!"<<endl;
    }
    else
    {
        cout<<"Password salah, coba lagi!"<<endl;
    }
    cout<<"Terima kasih sudah menggunakan aplikasi ini!"<<endl;
    return 0;
}
