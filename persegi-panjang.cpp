#include<iostream>
using namespace std;
int main()
{
    int panjang, lebar, tinggi, keliling, luas, volume;
    cout<<"===Penghitung persegi panjang dan balok==="<<endl;
    cout<<"\nMasukkan panjang : ";cin>>panjang;
    cout<<"\nMasukkan lebar : ";cin>>lebar;
    cout<<"\nMasukkan tinggi : ";cin>>tinggi;
    keliling=(panjang+lebar)*2;
    luas=panjang*lebar;
    volume=panjang*lebar*tinggi;
    cout<<"\n\nKeliling persegi panjang tersebut adalah "<<keliling<<endl;
    cout<<"\nLuas persegi panjang tersebut adalah "<<luas<<endl;
    cout<<"\nVolume balok tersebut adalah "<<volume<<endl;
}
