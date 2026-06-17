#include<iostream>
using namespace std;
int main()
{
    int data, jumlah, cacah;
    data = 0;
    jumlah = 0;
    cacah = 0;
    while (data != -1)
    {
        cout<<"Masukkan data angka : ";
        cin>>data;
        jumlah+=data;
        cacah++;
    }
    cout<<"Jumlah datanya adalah : "<<jumlah<<endl;
    cout<<"Rata-rata : "<<jumlah/cacah;
    return 0;
}