#include<iostream>
using namespace std;
int main() {
    int akhir;
    cout<<"Anda ingin mencetak 1 sampai berapa? ";cin>>akhir;
    for(int i=1; i<=akhir; i++)
    {
        cout<<i<<" ";
    }
    return 0;
}