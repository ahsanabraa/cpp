#include<iostream>
using namespace std;
int main() {
    int n, jum=0;
    for(n=1; n<=10; n+=3)
    {
        cout<<n<<" ";
        jum+=n;
    }
    cout<<" "<<endl;
    cout<<"Jumlah deret bilangannya adalah : "<<jum<<endl;
    return 0 ;
}