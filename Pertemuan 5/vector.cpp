#include <iostream>
#include <vector> // header vector untuk bisa menggunakan vector
#include <string> // berisi fungsi fungsi untuk operasi string

using namespace std;

int main (){
    // Vector Declaration & Initialization
    vector<string> nama_kayawan = {"Alya", "Parul", "Syukron", "Aurick", "Dzakwan"};

    // Ascending Element of Vector
    for(int i = 0; i < nama_kayawan.size(); i++) {
        cout << nama_kayawan[i] << endl; // menampilkan elemen vector satu per satu berdasarkan indeks
    }

    for (string karyawan : nama_kayawan) {
        cout << karyawan << endl; // menampilkan elemen vector menggunakan range-based for loop
    }


    // Add data to Vector
    nama_kayawan.push_back("Imam");

    for(int i = 0; i < nama_kayawan.size(); i++) {
        cout << nama_kayawan[i] << endl;  // menampilkan vector setelah penambahan elemen baru
    }

    
    // Delete data from Vector
    nama_kayawan.pop_back(); // menghapus elemen terakhir dari vector
    nama_kayawan.erase(nama_kayawan.begin() + 3); // menghapus elemen pada indeks ke-3 (elemen keempat)

    for(int i = 0; i < nama_kayawan.size(); i++) {
        cout << nama_kayawan[i] << endl; // menampilkan vector setelah penghapusan elemen
    }
}
