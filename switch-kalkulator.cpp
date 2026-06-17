#include <iostream>
using namespace std;
int main()
{
    int k, r, s, p, l;
    float h;
    char u;

    do
    {
        cout << "\n\n===Kalkulator===" << endl;
        cout << "1. Luas lingkaran" << endl;
        cout << "2. Luas persegi" << endl;
        cout << "3. Luas persegi panjang" << endl;
        cout << "Pilih kalkulator (1-3) : ";
        cin >> k;

        switch (k)
        {
        case 1:
            cout << "Masukkan panjang jari-jari : ";
            cin >> r;
            h = 3.14 * r * r;
            cout << "Luas lingkarannya adalah : " << h << endl;
            break;

        case 2:
            cout << "Masukkan panjang sisi : ";
            cin >> s;
            h = s * s;
            cout << "Luas perseginya adalah : " << h << endl;
            break;

        case 3:
            cout << "Masukkan panjang : ";
            cin >> p;
            cout << "Masukkan lebar : ";
            cin >> l;
            h = p * l;
            cout << "Luas persegi panjangnya adalah : " << h << endl;
            break;

        default:
            cout << "Pilihan tidak tertera" << endl;
            break;
        }

        cout<<"Mau hitung lagi? (Y/N) ";
        cin>>u;
    }
    while(u=='Y' || u=='y');

    return 0;
}