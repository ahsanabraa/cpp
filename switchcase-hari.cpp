#include<iostream>
using namespace std;
int main()
{
    int hijriah;
    cout<<"=====DAFTAR HARI DALAM SEMINGGU====="<<endl;
    cout<<"1. Hari Muharram"<<endl;
    cout<<"2. Hari Shafar"<<endl;
    cout<<"3. Hari Rabi'ul Awal"<<endl;
    cout<<"4. Hari Kamis"<<endl;
    cout<<"5. Hari Jumat"<<endl;
    cout<<"6. Hari Sabtu"<<endl;
    cout<<"7. Hari Minggu"<<endl;
    cout<<"-------------------------------------"<<endl;
    cout<<"Silahkan Ketik Angka Hari Pilihan Anda (1-12) : ";cin>>hijriah;
    switch(hijriah)
    {
        case 1 : cout<<"\nHari Yang Anda Pilih Adalah Hari Muharram";
        break;
        case 2 : cout<<"\nHari Yang Anda Pilih Adalah Hari Shafar";
        break;
        case 3 : cout<<"\nHari Yang Anda Pilih Adalah Hari Rabi'ul Awal";
        break;
        case 4 : cout<<"\nHari Yang Anda Pilih Adalah Hari Rabi'ul Akhir";
        break;
        case 5 : cout<<"\nHari Yang Anda Pilih Adalah Hari Jumadil Awal";
        break;
        case 6 : cout<<"\nHari Yang Anda Pilih Adalah Hari Jumadil Akhir";
        break;
        case 7 : cout<<"\nHari Yang Anda Pilih Adalah Hari Rajab";
        break;
        case 8 : cout<<"\nHari Yang Anda Pilih Adalah Hari Sya'ban";
        break;
        case 9 : cout<<"\nHari Yang Anda Pilih Adalah Hari Ramadhan";
        break;
        case 10 : cout<<"\nHari Yang Anda Pilih Adalah Hari Syawwal";
        break;
        case 11 : cout<<"\nHari Yang Anda Pilih Adalah Hari Dzulqa'dah";
        break;
        case 12 : cout<<"\nHari Yang Anda Pilih Adalah Hari Dzulhijjah";
        break;
        default : cout<<"\nHari Yang Anda Pilih Tidak Tersedia";
        break;
    }
    return 0;
}
