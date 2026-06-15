#include <iostream>
using namespace std;
int main()
{
    int a, r, s, p, l, t;
    float luas, keliling, volume;
    char jwb;

menu:
    cout << "\n\tKALKULATOR" << endl;
    cout << "\t==========" << endl;
    cout << "\nPilihan opersi : " << endl;
    cout << "\n[1] Luas Lingkaran : " << endl;
    cout << "[2] Keliling lingkaran : " << endl;
    cout << "[3] Volume Bola : " << endl;
    cout << "[4] Luas Persegi : " << endl;
    cout << "[5] Keliling Persegi : " << endl;
    cout << "[6] Volume Kubus : " << endl;
    cout << "[7] Luas Persegi Panjang : " << endl;
    cout << "[8] Keliling Persegi Panjang : " << endl;
    cout << "[9] Volume Balok : " << endl;
    cout << "\nMasukkan pilihannmu : ";
    cin >> a;

    if (a == 1 || a == 2 || a == 3)
    {
        cout << "Masukkan Jari-jari : ";
        cin >> r;

        if (a == 1)
        {
            luas = 3.14 * r * r;

            cout << "Luas lingkaran = " << luas << endl;
            cout << "Mau hitung lagi? ";
            cin >> jwb;

            if (jwb == 'Y' || jwb == 'y')
            {
                goto menu;
            }
            else
            {
                cout << "Terima kasih";
            }
        }
        else if (a == 2)
        {
            keliling = 3.14 * (r * 2);

            cout << "Keliling lingkaran = " << keliling << endl;
            cout << "Mau hitung lagi? ";
            cin >> jwb;

            if (jwb == 'Y' || jwb == 'y')
            {
                goto menu;
            }
            else
            {
                cout << "Terima kasih";
            }
        }
        else
        {
            volume = 4.0 / 3.0 * 3.14 * r * r * r;

            cout << "Volume bola = " << volume << endl;
            cout << "Mau hitung lagi? ";
            cin >> jwb;

            if (jwb == 'Y' || jwb == 'y')
            {
                goto menu;
            }
            else

            {
                cout << "Terima kasih";
            }
        }
    }

    else if (a == 4 || a == 5 || a == 6)
    {
        cout << "Masukkan sisi : ";
        cin >> s;

        if (a == 4)
        {
            luas = s * s;

            cout << "Luas persegi = " << luas << endl;
            cout << "Mau hitung lagi? ";
            cin >> jwb;

            if (jwb == 'Y' || jwb == 'y')
            {
                goto menu;
            }
            else
            {
                cout << "Terima kasih";
            }
        }
        else if (a == 5)
        {
            keliling = s * 4;

            cout << "Keliling persegi = " << keliling << endl;
            cout << "Mau hitung lagi? ";
            cin >> jwb;

            if (jwb == 'Y' || jwb == 'y')
            {
                goto menu;
            }
            else
            {
                cout << "Terima kasih";
            }
        }
        else
        {
            volume = s * s * s;

            cout << "Volume kubus = " << volume << endl;
            cout << "Mau hitung lagi? ";
            cin >> jwb;

            if (jwb == 'Y' || jwb == 'y')
            {
                goto menu;
            }
            else
            {
                cout << "Terima kasih";
            }
        }
    }

    else if (a == 7 || a == 8 || a == 9)
    {
        cout << "Masukkan panjang : ";
        cin >> p;
        cout << "Masukkan lebar : ";
        cin >> l;

        if (a == 7)
        {
            luas = p * l;

            cout << "Luas persegi panjang = " << luas << endl;
            cout << "Mau hitung lagi? ";
            cin >> jwb;

            if (jwb == 'Y' || jwb == 'y')
            {
                goto menu;
            }
            else
            {
                cout << "Terima kasih";
            }
        }
        else if (a == 8)
        {
            keliling = (p + l) * 2;

            cout << "Keliling persegi panjang = " << keliling << endl;
            cout << "Mau hitung lagi? ";
            cin >> jwb;

            if (jwb == 'Y' || jwb == 'y')
            {
                goto menu;
            }
            else
            {
                cout << "Terima kasih";
            }
        }
        else
        {
            cout << "Masukkan tinggi : ";
            cin >> t;

            volume = p * l * t;

            cout << "Volume balok = " << volume << endl;
            cout << "Mau hitung lagi? ";
            cin >> jwb;

            if (jwb == 'Y' || jwb == 'y')
            {
                goto menu;
            }
            else
            {
                cout << "Terima kasih";
            }
        }
    }

    else
    {
        cout << "Pilihan tidak tersedia" << endl;
        cout << "Mau hitung lagi? ";
        cin >> jwb;

        if (jwb == 'Y' || jwb == 'y')
        {
            goto menu;
        }
        else
        {
            cout << "Makasih";
        }
    }
    return 0;
}
