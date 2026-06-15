#include<iostream>
using namespace std;
int main()
{
    char ulangi='y';
    int counter=0;
    do
    {
        cout<<"Apakah kamu mau mengulang? (y/n) : ";cin>>ulangi;
        counter++;
    }
    while (ulangi =='y' || ulangi=='Y');
    cout<<"\n\n-------------------\n";
    cout<<"Perulangan Selesai!\n";
    cout<<"Kamu mengulang sebanyak "<<counter<<" kali";
    return 0;
}