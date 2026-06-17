#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    double jariJari, keliling, luas, volume;
    cout<<"===Penghitung lingkaran dan bola==="<<endl;
    cout<<"\nMasukkan jari-jari : ";cin>>jariJari;
    keliling=2*3.14*jariJari;
    luas=3.14*pow(jariJari,2);
    volume=(4.0/3.0)*3.14*pow(jariJari,3);
    cout<<"\n\nKeliling lingkaran tersebut adalah "<<keliling<<endl;
    cout<<"\nLuas lingkaran tersebut adalah "<<luas<<endl;
    cout<<"\nVolume bola tersebut adalah "<<volume<<endl;
}
