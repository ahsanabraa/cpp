#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float sisi, keliling, luas, volume;
    cout<<"Masukkan Panjang Sisi : ";cin>>sisi;
    keliling=sisi*4;
    luas=pow(sisi,2);
    volume=pow(sisi,3);
    cout<<"Keliling : "<<keliling<<endl;
    cout<<"Luas : "<<luas<<endl;
    cout<<"Volume : "<<volume<<endl;
    return 0;
}
