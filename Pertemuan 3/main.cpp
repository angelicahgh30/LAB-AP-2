#include <iostream>
using namespace std;

long faktorial(int n){ // fungsi rekursif untuk menghitung faktorial dari n
    long faktor; // variabel untuk menyimpan hasil faktorial  
    if(n > 1){
        faktor = n * faktorial(n-1); // jika n lebih dari 1, hitung faktorial secara rekursif
    }else if(n == 1 || n == 0){ // basis rekursif
        faktor = 1;
    }else if(n < 0) {
        cout << "n tidak boleh negatif\n";
        faktor = 0;
    }
    return faktor;
}

int main(){
    long nilai,hasil;
    cout << "Masukkan Nilai n : ";cin >> nilai;
    hasil = faktorial(nilai);
    cout << nilai << "!  = " << hasil << endl;

    return 0;
}
