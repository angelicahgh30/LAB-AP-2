#include <iostream>
using namespace std;

int main() {
    string kalimat;
    
    cout << "Masukkan sebuah kalimat: ";
    getline(cin, kalimat); // Membaca kalimat dengan spasi

    for (int i = 0; i < kalimat.length(); i++) {
        // Cek apakah karakter adalah huruf vokal
        if (kalimat[i] == 'a' || kalimat[i] == 'e' || kalimat[i] == 'i' || 
            kalimat[i] == 'o' || kalimat[i] == 'u') {
            kalimat[i] = toupper(kalimat[i]); // Ubah ke huruf vokal menjadi kapital
        }
    }

    cout << "Hasil: " << kalimat << endl; // Menampilkan hasil kalimat setelah mengubah huruf vokal menjadi kapital

    return 0;
}
