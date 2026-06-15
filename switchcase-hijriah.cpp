#include<iostream>
using namespace std;
int main()
{
    int hijriah;

    cout<<"[1] Muharram"<<endl;
    cout<<"[2] Safar"<<endl;
    cout<<"[3] Rabiul Awal"<<endl;
    cout<<"[4] Rabiul Akhir"<<endl;
    cout<<"[5] Jumadil Awal"<<endl;
    cout<<"[6] Jumadil Akhir"<<endl;
    cout<<"[7] Rajab"<<endl;
    cout<<"[8] Syaban"<<endl;
    cout<<"[9] Ramadhan"<<endl;
    cout<<"[10] Syawal"<<endl;
    cout<<"[11] Dzulqodah"<<endl;
    cout<<"[12] Dzulhijjah"<<endl;
    cout<<"Masukkan bulan (1-12) : ";cin>>hijriah;

    switch(hijriah)
    {
        case 1 : cout<<"Bulan yang anda pilih adalah bulan Muharram";break;
        case 2 : cout<<"Bulan yang anda pilih adalah bulan Safar";break;
        case 3 : cout<<"Bulan yang anda pilih adalah bulan Rabiul Awal";break;
        case 4 : cout<<"Bulan yang anda pilih adalah bulan Rabiul Akhir";break;
        case 5 : cout<<"Bulan yang anda pilih adalah bulan Jumadil Awal";break;
        case 6 : cout<<"Bulan yang anda pilih adalah bulan Jumadil Akhir";break;
        case 7 : cout<<"Bulan yang anda pilih adalah bulan Rajab";break;
        case 8 : cout<<"Bulan yang anda pilih adalah bulan Syaban";break;
        case 9 : cout<<"Bulan yang anda pilih adalah bulan Ramadhan";break;
        case 10 : cout<<"Bulan yang anda pilih adalah bulan Syawal";break;
        case 11 : cout<<"Bulan yang anda pilih adalah bulan Dzulqodah";break;
        case 12 : cout<<"Bulan yang anda pilih adalah bulan Dzulhijjah";break;
    }
return 0;
}