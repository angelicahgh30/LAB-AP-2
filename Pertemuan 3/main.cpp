#include <iostream>
using namespace std;

long faktorial(int n){ // fungsi rekursif untuk menghitung faktorial dari n
    long faktor; // variabel untuk menyimpan hasil faktorial  
    if(n > 1){
        faktor = n * faktorial(n-1); // jika n lebih dari 1, hitung faktorial secara rekursif
    }else if(n == 1 || n == 0){ // basis rekursif => faktorial dari 0 dan 1
        faktor = 1;
    }else if(n < 0) { // utnuk input negatif faktorial tidak terdefinisi
        cout << "n tidak boleh negatif\n";
        faktor = 0; // // Mengembalikan 0 untuk input negatif
    }
    return faktor;
}

int main(){
    long nilai,hasil; // Variabel untuk menyimpan input dan hasil
    cout << "Masukkan Nilai n : ";cin >> nilai; // Meminta pengguna memasukkan nilai n
    hasil = faktorial(nilai); // Memanggil fungsi faktorial
    cout << nilai << "!  = " << hasil << endl; // Menampilkan hasil faktorial

    return 0;
}
