#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int num=1;
    cout<<"Angka-angka pangkat 3\n";
    while (num<=10)
    {
        cout<<num<<"\t => \t"<<pow(num,3)<<endl;
        num++;
    }
    return 0;
}