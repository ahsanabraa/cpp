#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double gAwal, gAkhir, pajak;

    cout<<"\nMasukkan gaji awal anda : Rp.";cin>>gAwal;

    if (gAwal >= 25000000)
        pajak = gAwal * 0.25;

    else if (gAwal >= 15000000)
        pajak = gAwal * 0.2;

    else if (gAwal >= 10000000)
        pajak = gAwal * 0.15;

    else
        pajak = 0;

    gAkhir = gAwal - pajak;

    cout.precision(0);

    cout<<"Pajak gaji anda adalah : Rp."<<fixed<<pajak<<endl;
    cout<<"Gaji akhir anda adalah : Rp."<<fixed<<gAkhir<<endl<<endl;

return 0;
}