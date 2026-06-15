#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int num=0, sum=0;
    do
    {
        sum+=num;
        cout<<"Masukkan angka : ";cin>>num;
    }
    while (num%2!=1);
    cout<<"\nJumlah adalah "<<sum<<endl;
    return 0;
}