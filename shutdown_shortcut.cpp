#include <stdlib.h>
#include <iostream>

using namespace std;

int main() {
    // Memberikan peringatan ke user sebelum shutdown
    cout << "Komputer akan mati dalam 5 detik..." << endl;
    cout << "Tekan CTRL+C untuk membatalkan!" << endl;
    
    // Perintah shutdown windows
    // /s = shutdown
    // /t 5 = timer 5 detik (biar ga kaget kepencet)
    system("shutdown /s /t 5");
    
    return 0;
}
