
#include <iostream>  // header untuk C++
#include <conio.h> // header untuk fungsi getch() dan getche()
using namespace std;

int main() {
    
    string nama;
    char kom, jenisKelamin;
    int nim;
    float ip;

    /*ini untuk komen 
    beberapa baris*/

    cout << "Hello World" << endl;

    cout << "Masukkan nama Anda : ";
    // cin >> nama;
    getline(cin, nama); // agar karakter spasi bisa terbaca

    cout << "Masukkan KOM : ";
    cin >> kom;

    cout << "Masukkan NIM : ";
    cin >> nim;

    cout << "Masukkan IP : ";
    cin >> ip;

    cout << "Masukkan jenis kelamin (L/P) :  ";
    jenisKelamin = getche(); // agar karakter langsg tampil, tanpa tekan enter

    /*Untuk Output*/
    cout << "\n" << nama << endl;
    cout << nim << endl;
    cout << kom << endl;
    cout << ip << endl;
    putchar(jenisKelamin); // untuk menampilkan karakter

    getch(); // karakter yang diketik ga di tampilkan di layar
}
