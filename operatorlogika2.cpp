#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,e,f,g;
    cout<<"Masukkan nilai a = ";
    cin>>a;
    cout<<"Masukkan nilai b = ";
    cin>>b;
    cout<<"Masukkan nilai c = ";
    cin>>c;
    d=a+4<10;
    e=b>a+5;
    f=c-3>=4;
    g=d&&e||f;
    cout<<"= Program ekspresi AND OR ="<<endl;
    cout<<"==========================="<<endl;
    cout<<"Hasil dari d = a + 4 < 10 adalah "<<d<<endl;
    cout<<"Hasil dari e = b > a + 5 adalah "<<e<<endl;
    cout<<"Hasil dari f = c - 3 >= 4 adalah "<<f<<endl;
    cout<<"Hasil dari g = d && e || f adalah "<<g<<endl;
    return 0;
}
