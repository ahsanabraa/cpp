#include<iostream>
using namespace std;
int main()
{
    int bil;
    cout<<"Masukkan nilai siswa : ";cin>>bil;
    if(bil>89)
        cout<<"Siswa mendapat predikat A";
    else if(bil>79)
        cout<<"Siswa mendapat predikat B";
    else if(bil>59)
        cout<<"Siswa mendapat predikat C";
    else
        cout<<"Siswa mendapat predikat D";
    return 0;
}
