#include <iostream>
using namespace std;

int main(){
    // penjumlahan matriks 2 x 2

    int matriks1[2][2]; // matriks pertama
    int matriks2[2][2]; // mantriks kedua
    int hasil[2][2]; // Matriks untuk menyimpan hasil penjumlahan

    // Input untuk Matriks 1
    cout << "Matriks 1" << endl;
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++) {
            cout << "Masukkan elemen baris " << i + 1 << " kolom " << j + 1 << " : ";
            cin >> matriks1[i][j]; // Membaca elemen matriks1
        }
    }

    // Input untuk Matriks 2
    cout << "Matriks 2" << endl;
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++) {
            cout << "Masukkan elemen baris " << i + 1 << " kolom " << j + 1 << " : ";
            cin >> matriks2[i][j]; // Membaca elemen matriks2
        }
    }

     // Penjumlahan Matriks
    cout << "Hasil Penjumlahan " << endl;
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++) {
            hasil[i][j] = matriks1[i][j] + matriks2[i][j];
            cout << hasil[i][j] << " "; // Menampilkan elemen hasil
        }
        cout << endl;
    }
}
