#include<iostream>
using namespace std;
int main() {
    int j=1, m, d;
    for(j=1;j<=10;j++)
    {
        m=j*60;
        d=m*60;
        cout<<j<<" Jam "<<m<<" Menit "<<d<<" Detik "<<endl;
    }
    return 0;
}