#include<iostream>
using namespace std;
int main()
{
    int harga,jumlah,total,diskon,potonganHarga;
    char kodeBaju,ukuran;
    string merk;

    cout<<"\t==Program cek harga baju==";
    cout<<"\t\n==Promo diskon 20% jika pembelian lebih dari Rp 500.000!!!==\n\n";
    cout<<"Masukkan kode baju : ";cin>>kodeBaju;
    cout<<"Masukkan jumlah baju : ";cin>>jumlah;

    if(kodeBaju=='1')
    {
        cout<<"Masukkan ukuran baju : ";cin>>ukuran;

        merk="Kick Denim";

        if(ukuran=='S' || ukuran=='s')
        {
            harga=200000;
        }
        else if(ukuran=='M' || ukuran=='m')
        {
            harga=220000;
        }
        else
        {
            harga=250000;
        }
    }
    else if(kodeBaju=='2')
    {
        cout<<"Masukkan ukuran baju : ";cin>>ukuran;

        merk="Prada";

        if(ukuran=='S' || ukuran=='s')
        {
            harga=150000;
        }
        else if(ukuran=='M' || ukuran=='m')
        {
            harga=160000;
        }
        else
        {
            harga=170000;
        }
    }
    else if(kodeBaju=='3')
    {
        cout<<"Masukkan ukuran baju : ";cin>>ukuran;

        merk="Gucci";

        if(ukuran=='S'  || ukuran=='s')
        {
            harga=205000;
        }
        else if(ukuran=='M'  || ukuran=='m')
        {
            harga=300000;
        }
        else
        {
            harga=350000;
        }
    }
    else
    {
        merk="-";
        ukuran='-';
        harga=0;
        cout<<"\n== Salah input kode baju ==";
    }

    total=harga*jumlah;
    diskon=total*0.8;
    potonganHarga=total-diskon;

    cout<<"\n\nMerek baju = "<<merk;
    cout<<"\nJumlah baju = "<<jumlah;
    cout<<"\nUkuran baju = "<<ukuran;
    cout<<"\nHarga baju = "<<harga;

    if(total>500000)
        {
            cout<<"\nTotal harga = "<<diskon;
            cout<<" (Termasuk diskon)";
            cout<<"\nPotongan harga = "<<potonganHarga;
        }
    else
        cout<<"\nTotal harga = "<<total;

return 0;
}
