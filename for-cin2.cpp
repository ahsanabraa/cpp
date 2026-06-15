#include<iostream>
using namespace std;
int main() {
    int a, b, c=0;
    cout<<"Berapa banyak bilangan? ";cin>>a;
    for(b=1; b<=a; b++)
    {
        cout<<c<<" ";
        c+=b;
    }
    return 0;
}