#include <iostream>
using namespace std;

// Fungsi sapa yang menerima parameter string nama dan menampilkan pesam sapaan kepengguna
void sapa(string nama) {
    cout << "Halo " << nama << " ! Selamat Datang di AP 2 !" << endl;
}

int main () {
    string namaPengguna = "Angel"; // variabel nama pengguna

    sapa(namaPengguna); // memanggil fungsi sapa dengan argumen nama pengguna

    return 0;
}
