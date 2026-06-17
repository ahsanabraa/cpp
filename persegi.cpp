#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float sisi, keliling, luas, volume;
    cout<<"===Penghitung persegi dan kubus==="<<endl;
    cout<<"\nMasukkan sisi : ";cin>>sisi;
    keliling=sisi*4;
    luas=pow(sisi,2);
    volume=pow(sisi,3);
    cout<<"\nKeiling persegi tersebut adalah "<<keliling<<endl;
    cout<<"Luas persegi tersebut adalah "<<luas<<endl;
    cout<<"Volume kubus tersebut adallah "<<volume<<endl;
}
