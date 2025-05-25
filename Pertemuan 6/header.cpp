#include <iostream> // Header => berisi fungsi fungsi yang dibuat dari bahasa pemrograman
#include <cmath> // header berisi operasi matematika yg lebih kompleks

using namespace std;

// Fungsi untuk menjumlahkan dua bilangan bulat
int jumlah (int a, int b) {
    return a + b;
}

// Fungsi untuk mengurangkan dua bilangan bulat
int kurang (int a, int b) {
    return a - b;
}

int main (){
    system ("CLS");

    int n;
    cout << jumlah (2,3)  << endl; // Menampilkan hasil penjumlahan
    cout << kurang(2,3)  << endl; // Menampilkan hasil pengurangan

    double angka = 25.0 ; // Variabel untuk menyimpan angka
    double akar = sqrt (angka); // // Menghitung akar kuadrat dari angka
    
    // Menampilkan hasil akar kuadrat
    cout << "Akar kuadrat dari  " << angka << "adalah : " << akar << endl;
}
