#include<iostream>
using namespace std;
int main() {
    int i;
    for(i=1; i<=15; i++)
    {
        if(i>5 && i<10) continue;
        cout<<i<<" ";
    }
    return 0;
}