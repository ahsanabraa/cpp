#include<iostream>
using namespace std;
int main()
{
    int panjang, lebar, tinggi, keliling,luas, volume;
    cout<<"Masukkan Panjang : ";cin>>panjang;
    cout<<"Masukkan Lebar : ";cin>>lebar;
    cout<<"Masukkan Tinggi : ";cin>>tinggi;
    keliling = (panjang+lebar)*2;
    luas = panjang * lebar;
    volume = panjang * lebar * tinggi;
    cout<<"Keliling : "<<keliling<<endl;
    cout<<"Luas : "<<luas<<endl;
    cout<<"Volume : "<<volume<<endl;
    return 0;
}
