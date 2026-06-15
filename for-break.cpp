#include<iostream>
using namespace std;
int main() {
    int i;
    for(i=1; i<=25; i++)
    {
        cout<<i<<" ";
        if(i==15) break;
    }
    cout<<"\nSelesai";
    return 0;
}