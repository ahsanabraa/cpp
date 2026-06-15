#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int alas, tinggi, tinggi_prisma, luas, volume;
    cout<<"Masukkan alas segitiga : ";cin>>alas;
    cout<<"Masukkan tinggi segitiga : ";cin>>tinggi;
    cout<<"Masukkan tinggi prisma : ";cin>>tinggi_prisma;
    luas=alas*tinggi/2;
    volume=luas*tinggi_prisma;
    cout<<"Luas segitiga tersebut adalah : "<<luas<<endl;
    cout<<"Volume prisma tersebut adalah : "<<volume<<endl;
}
