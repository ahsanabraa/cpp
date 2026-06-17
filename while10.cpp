#include<iostream>
using namespace std;
int main()
{
    int i=1;
    float jumlah=0, rata=0, nilai;
    cout<<"Tekan 0 untuk menghentikan program"<<endl;
    while (i)
    {
        cout<<"Nilai ke-"<<i<<" = ";
        cin>>nilai;
        if (nilai>=6)
        {
            cout<<"Nilai diabaikan"<<endl;
            continue;
        }
        if (nilai==0)
        {
            break;
        }
        i++;
        jumlah+=nilai;
    }
    rata=jumlah/(i-1);
    cout<<"Jumlah nilai = "<<jumlah<<endl;
    cout<<"Rata-rata = "<<rata;
    return 0;
}