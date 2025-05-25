#include <iostream>
using namespace std;

string namaGlobal = "Ilmu"; // Variabel global => dapat diseluruh program
void namaVariabel() {
    string namaLokal = "Komputer";  // variabel lokal => hanya bisa diakses di dalam fungsi


    // coba akses variabel lokal
    cout << namaLokal << endl;

    // coba akses variabel global
    cout << namaGlobal << endl;
}

int main () {
    namaVariabel(); // memanggil fungsi namaVariabel

    // coba akses variabel global dari main
    cout << namaGlobal << endl;

    // coba akses variabel lokal dari main (tidak bisa karena hanya ada di fungsi namaVariabel)
    // cout << namaLokal << endl; // ga iso, akan error jika diuncomment

}
