#include <iostream>
using namespace std;

int main(){
    string kalimat; // deklarasi variabel bertipe string
    int i; //  Variabel indeks untuk perulangan

    system("CLS");

    cout << "Masukkan kalimat : "; // Meminta pengguna memasukkan kalimat
    getline(cin, kalimat); // Membaca kalimat dengan spasi

    // a n g e l
    for(i = 0; i < kalimat.length(); i++) {
        kalimat[i] = toupper(kalimat[i]); // Mengubah nilai variabel ke huruf kapital
    }

    cout << "Kalimat dalam huruf kapital : " << kalimat << endl;

    return 0;
}
