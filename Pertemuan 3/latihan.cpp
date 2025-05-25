#include <iostream>

using namespace std;

int main() {
    int angka; // variabel untuk menhyimpan bilangan bulat yang dimasukkan
    cout << "Masukkan sebuah bilangan bulat: "; // meminta pengguna memasukkan angka
    cin >> angka; // membaca input angka

    if (angka % 10 == 0) { // mengecek apakah angka merupakan kelipatan 10
        cout << angka << " adalah kelipatan dari 10." << endl;
    } else if (angka % 5 == 0) { // jika bukan kelipatan 10, cek apakah kelipatan t5
        cout << angka << " adalah kelipatan dari 5." << endl;
    } else { // jika bukan kelipatan 5 maupun 10
        cout << angka << " bukan kelipatan dari 5 atau 10." << endl;
    }

 return 0;
}
