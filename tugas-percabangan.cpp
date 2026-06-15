#include <iostream>
using namespace std;
int main()
{
    float nilai, tugas, uts, uas;

    cout << "Masukkan nilai Tugas : ";
    cin >> tugas;
    cout << "Masukkan nilai UTS: ";
    cin >> uts;
    cout << "Masukkan nilai UAS : ";
    cin >> uas;

    nilai = (tugas * 0.3) + (uts * 0.4) + (uas * 0.3);

    if (nilai > 89)
    {
        cout << "Nilai akhir siswa adalah " << nilai;
        cout << " ( Amat Baik )" << endl;
    }
    else if (nilai > 79)
    {
        cout << "Nilai akhir siswa adalah " << nilai;
        cout << " ( Baik )" << endl;
    }
    else if (nilai > 59)
    {
        cout << "Nilai akhir siswa adalah " << nilai;
        cout << " ( Cukup )" << endl;
    }
    else if (nilai > 49)
    {
        cout << "Nilai akhir siswa adalah " << nilai;
        cout << " ( Kurang )" << endl;
    }
    else
    {
        cout << "Nilai akhir siswa adalah " << nilai;
        cout << " ( Amat Kurang )" << endl;
    }
    return 0;
}
