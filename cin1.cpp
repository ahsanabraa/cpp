#include<iostream>
using namespace std;
int main()
{
string nama, alamat, nama_barang;
float harga, jumlah, total;
cout<<"Masukkan nama : ";cin>>nama;
cout<<"Masukkan alamat : ";cin>>alamat;
cout<<"Masukkan nama barang : ";cin>>nama_barang;
cout<<"Masukkan harga barang : ";cin>>harga;
cout<<"Masukkan jumlah barang yang dibeli : ";cin>>jumlah;
total=harga*jumlah;
cout<<"\nPembeli yang bernama "<<nama<<" beralamat di "<<alamat<<endl;
cout<<"\nmembeli "<<nama_barang<<" dengan pembayaran sebesar "<<total<<endl;
return 0;
}
