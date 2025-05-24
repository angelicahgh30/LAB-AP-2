#include <iostream> // header untuk input dan output
using namespace std;

int main () {

    float luas, p, l; // variabel untuk menyimpan luas, panjang, dan lebar

    cout << "Masukkan panjang : "; // meminta pengguna untuk memasukkan panjang
    cin >> p; // membaca nilai panjang dari input pengguna

    cout << "Masukkan lebar : "; // meminta pengguna untuk memasukkan lebar
    cin >> l; // membaca nilai lebar dari input pengguna

    luas = p * l; // rumus untuk menghitung luas
    cout << "Luas = " << luas << endl; // menampilkan hasil luas

    return 0;
}
