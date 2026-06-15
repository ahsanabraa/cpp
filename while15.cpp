#include<iostream>
using namespace std;
int main()
{
    double num=1000000;
    cout<<"Byte     Kilo Byte      Mega Byte       Giga Byte       Tera Byte\n";
    cout<<"=================================================================\n";
    while(num>=100)
    {
        cout<<num<<"\t\t"<<num/1000<<"\t\t"<<num/1000000<<"\t\t"<<num/1000000000<<"\t\t"<<num/1000000000000<<endl;
        num/=100;
    }
    return 0;
}