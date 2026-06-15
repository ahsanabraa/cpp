#include<iostream>
#include<math.h>
using namespace std;
int main()
{
int a,b,c,d,e,k;
float f,g,h,i,j;
cout<<"Masukkan nilai ke-1 : ";cin>>a;
cout<<"Masukkan nilai ke-2 : ";cin>>b;
cout<<"Masukkan nilai ke-3 : ";cin>>f;
cout<<"Masukkan nilai ke-4 : ";cin>>g;
c=a+b;
d=a-b;
e=a*b;
h=f/g;
k=a%b;
i=pow(a,b);
j=sqrt(a);
cout<<"\nHasil nilai penjumlahan "<<a<<" dan "<<b<<" adalah "<<c<<endl;
cout<<"\nHasil nilai pengurangan "<<a<<" dan "<<b<<" adalah "<<d<<endl;
cout<<"\nHasil nilai perkalian "<<a<<" dan "<<b<<" adalah "<<e<<endl;
cout<<"\nHasil nilai pembagian "<<f<<" dan "<<g<<" adalah "<<h<<endl;
cout<<"\nHasil sisa pembagian dari "<<a<<" dan "<<b<<" adalah "<<k<<endl;
cout<<"\nHasil nilai "<<a<<" dipangkatkan dengan "<<b<<" adalah "<<i<<endl;
cout<<"\nHasil nilai akar pangkat 2 dari "<<a<<" adalah "<<j<<endl;
}

