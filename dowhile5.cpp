#include<iostream>
using namespace std;
int main()
{
    int bil=10;
    do
    {
        cout<<"Hi! Pernyataan di dalam do while ini tetap dijalankan, walaupun kondisi salah."<<endl;
    }
    while (bil<5);
    cout<<endl;
    cout<<"Keluar dari looping. ini pernyataan di luar do while."<<endl;
    return 0;
}