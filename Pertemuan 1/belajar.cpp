#include <iostream>  // header untuk C++
#include <conio.h> // header untuk fungsi getch() dan getche()
using namespace std;

int main() {
    
    string nama; // variabel untuk menyimpan nama
    char kom, jenisKelamin; // variabel untuk menyimpan KOM dan jenis kelamin
    int nim; // variabel untuk menyimpan nim
    float ip; // variabel untuk menympan IP

    /*ini untuk komen 
    beberapa baris*/

    cout << "Hello World" << endl; // menampilkan pesan "Hello World"

    cout << "Masukkan nama Anda : "; // meminta pengguna untuk memasukkan nama
    // cin >> nama; // diberi komentar agar tidak mengganggu input dengan spasi
    getline(cin, nama); // agar karakter spasi bisa terbaca

    cout << "Masukkan KOM : "; // meminta pengguna untuk memasukkan KOM
    cin >> kom; // membaca karakter untuk KOM

    cout << "Masukkan NIM : "; // meminta pengguna untuk memasukkan NIM
    cin >> nim; // membaca bilangan bulat untuk NIM

    cout << "Masukkan IP : "; // meminta pengguna untuk memasukkan IP
    cin >> ip; // membaca bilangan desimal untuk IP

    cout << "Masukkan jenis kelamin (L/P) :  "; // meminta pengguna nuntuk memasukkan jenis kelamin
    jenisKelamin = getche(); // agar karakter langsg tampil, tanpa tekan enter

    /*Untuk Output*/
    cout << "\n" << nama << endl; // menampilkan nama 
    cout << nim << endl; // menampilkan NIM
    cout << kom << endl; // menampilkan KOM
    cout << ip << endl; // menamipilkan IP
    putchar(jenisKelamin); // untuk menampilkan karakter

    getch(); // karakter yang diketik ga di tampilkan di layar
}
