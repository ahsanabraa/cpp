#include<iostream>
using namespace std;
int main()
{
    int i=1;
    while (i<=12)
    {
        cout<<"Bulan ke-"<<i<<" : "<<endl;
        int j=1;
        while (j<=4)
        {
            cout<<"Minggu ke-"<<j<<" ";
            int k=1;
            while (k<=7)
            {
                cout<<"Hari = "<<k<<" ";
                cout<<endl;
                k++;
            }
            cout<<endl;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}