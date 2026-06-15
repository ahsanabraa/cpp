#include<iostream>
using namespace std;
int main()
{
    int a,c;
    cout<<"\t Tinggi Badan \n\n";
    cout<<"-Jenis Kelamin-\n";
    cout<<"1 : Laki-Laki \n";
    cout<<"2 : Perempuan \n";
    cout<<"Masukkan Jenis Kelammin : ";cin>>a;
    if (a==1)
    {
        cout<<"Masukkan Tinggi Badan : ";cin>>c;
            if(c>165)
                cout<<"Laki-Laki Tersebut Tinggi";
            else if(c==165)
                cout<<"Laki-Laki Tersebut Standar";
            else
                cout<<"Laki-Laki Tersebut Pendek";
    }
    else if(a==2)
    {
        cout<<"Masukkan Tinggi Badan : ";cin>>c;
                if(c>160)
                    cout<<"Perempuan Tersebut Tinggi";
                else if(c==160)
                    cout<<"Perempuan Tersebut Standar";
                else
                    cout<<"Perempuan Tersebut Pendek";
    }
    else
        cout<<"Silakan Masukkan Jenis Kelamin ( 1-2 )";
return 0;

}
