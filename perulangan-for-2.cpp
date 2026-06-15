#include <iostream>
using namespace std;

int main()
{
    int jumlah = 0;

    for (int i = 1; i <= 5; i++)
    {
        jumlah += i;
    }

    cout << "Jumlah = " << jumlah;
    return 0;
}