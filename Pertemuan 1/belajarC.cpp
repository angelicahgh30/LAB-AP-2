#include <stdio.h> // header untuk C
#include <conio.h> // header untuk fungsi getch()

int main() {
    char nama[50]; // Array karakter untuk menyimpan nama
    int nim; // variabel untuk menympan NIM
    char kom[2]; // Array untuk menyimpan KOM
    float ip; // Variabel untuk menyimpan IP

    printf("Hello World\n"); // fungsi keluaran pada C

    printf("Masukkan nama : "); // meminta pengguna memasukkan nama
    gets(nama); // get string

    printf("Masukkan nim : "); // meminta pengguna memasukkan NIM
    scanf("%d", &nim); // fungsi masukan pada C

    getchar(); // mengambil karakter newline yang tersisa dari buffer setelah scanf

    printf("Masukkan kom : "); // meminta pengguna memasukkan KOM
    gets(kom); // get string KOM

    printf("Masukkan ip : "); // meminta pengguna memasukkan IP
    scanf("%f", &ip); // membaca input float untuk IP 

    /* Untuk Output */
    printf("Nama : "); // menampilkan label untuk nama
    puts(nama); // put string, digunakan untuk string dalam bentuk array char

    printf("NIM : %d\n", nim); // menampilkan NIM yang dimasukkan

    printf("KOM : "); // menampilkan label untuk KOM 
    puts(kom); // menampilkan KOM yang dimasukkan
    printf("IP : %f\n", ip); // menampilkan IP yang dimasukkan

    printf("press any button to continue..."); // pesan untuk menunggu dari pengguna
    getch(); // menunggu pengguna menekan tombol sebelum program berakhir
}
