adsdasdw#include<iostream>
using namespace std;
int main()
{
    int a, c;
    cout<<"\t Tinggi Badan \n\n";
    cout<<"-Jenis Kelamin-\n";
    cout<<"1 : Laki-Laki \n";
    cout<<"2 : Perempuan \n";
    cout<<"Masukkan Jenis Kelammin : ";cin>>a;
switch(a)
{
    case 1 : cout<<"Masukkan tinggi badan : ";cin>>c;
        {
                if(c>165)aqw

                    cout<<"Laki-laki tersebut tinggi";
                else if(c==165)
                    cout<<"Laki-laki tersebut standar";
                else
                    cout<<"Laki-laki tersebut pendek";
        }
break;
    case 2 : cout<<"Masukkan Tinggi Badan : ";cin>>c;
        {
                if(c>160)
                    cout<<"Perempuan Tersebut Tinggi";
                else if(c==160)
                    cout<<"Perempuan Tersebut Standar";
                else
                    cout<<"Perempuan Tersebut Pendek";
        }
break;
    default : cout<<"Masukkan jenis kelamin ( 1-2 )";
}
return 0;
}
