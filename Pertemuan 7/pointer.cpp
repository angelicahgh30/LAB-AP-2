#include <iostream>
using namespace std;

// fungsi penjumlahan biasa
void penjumlahan(int a, int b){
    cout << a + b << endl;
}


// fungsi penjumlahan dengan pointer
void penjumlahanPointer(int *a, int *b) { // parameter formal yg berisi nilai dari variabel yg alamatnya dikirim dari parameter aktual
    *a += *b; // akan memanipulasi nilai variabel yg alamatnya ditunjuk oleh pointer
    cout << *a << endl;
}

int main () {
    system("CLS");

    // Pointer Deklaration
    int number = 35;
    int *pointer_number = &number; // 'pointer_number' menunjuk ke alamat dari variabel 'number

    cout << "Isi variabel number = " << number << endl;
    cout << "Alamat dari memori variabel number = " << &number << endl;
    cout << "Isi variabel pointer_number = " << pointer_number << endl;
    cout << "Isi variabel yang di tunjuk oleh pointer_number = " << *pointer_number << endl;
    cout << "Alamat memori variabel pointer_number = " << &pointer_number << endl;
    cout << endl;


    // Pointer Operation
    *pointer_number = 25; // Mengganti nilai pada variabel yang alamatnya ditunjuk oleh 'pointer_number'
    cout << "Isi variabel number = " << number << endl;
    cout << "Alamat dari memori variabel number = " << &number << endl;
    cout << "Isi variabel pointer_number = " << pointer_number << endl;
    cout << "Isi variabel yang di tunjuk oleh pointer_number = " << *pointer_number << endl;
    cout << "Alamat memori variabel pointer_number = " << &pointer_number << endl;
    cout << endl;


    // Pointer in Array
    int num[] = {1, 2, 3, 4, 5};
    int *pointer_num = num; // 'pointer_angka' akan menunjuk ke alamat dari array 'angka'
    cout << "Isi variabel num = " << num[0] << endl;
    cout << "Alamat dari memori variabel num = " << &num[3] << endl;
    cout << "Isi variabel pointer_num = " << pointer_num << endl;
    cout << "Isi variabel yang di tunjuk oleh pointer_num = " << *pointer_num << endl;
    cout << "Alamat memori variabel pointer_num = " << &pointer_num << endl;
    cout << endl;

    *pointer_num += 5;
    cout << "Isi variabel num = " << num[0] << endl;
    cout << "Alamat dari memori variabel num = " << &num[3] << endl;
    cout << "Isi variabel pointer_num = " << pointer_num << endl;
    cout << "Isi variabel yang di tunjuk oleh pointer_num = " << *pointer_num << endl;
    cout << "Alamat memori variabel pointer_num = " << &pointer_num << endl;
    cout << endl;


    // Pointer in Paramater
    int num1 = 5;
    int num2 = 7;

    // penjumlahan tanpa pointer
    // => nilai yang sudah ditambahkan tidak berubah saat dipanggil di program utama
    penjumlahan(num1, num2);
    cout << num1 << endl;
    cout << num2 << endl;

    // penjumlahan menggunakan pointer  
    // => nilai yang sudah ditambahkan akan memanipulasi nilai dari variabel yg ditunjuk oleh pointer
    penjumlahanPointer(&num1, &num2); // mengirimkan parameter aktual berisi alamat variabelnya
    cout << num1 << endl;
    cout << num2 << endl;


    // Pointer in Pointer => pointer yang menunjuk alamat pointer lain
    int score = 4;
    int *pointer_score = &score; // 'pointer_skor' menunjuk ke alamat variabel 'skor'
    int **ptr_pointer_score = &pointer_score; // pointer in pointer menunjuk ke alamat dari pointer 'pointer_skor'
    cout << "Isi variabel score = " << score << " dan alamat memorinya " << &score << endl;
    cout << "Isi variabel pointer_score " << pointer_score << " dan isi variabel yang ditunjuk oleh pointer_score " << *pointer_score << " alamat memori pointer_score " << &pointer_score << endl;
    cout << "Isi variabel ptr_pointer_score " << ptr_pointer_score << " dan isi variabel yang ditunjuk oleh ptr_pointer_score " << **ptr_pointer_score << " alamat memori pointer_score " << &ptr_pointer_score << endl;


    // Dynamic Pointer  => pointer yang menunjuk ke alamat memori yang akan dialokasikan saat program berjalan
    int *ptr = new int; // pointer 'ptr' akan menunjuk ke sebuah 'int' yang dipinjam pada area memori dinamis
    *ptr = 30; // mengisikan angka 30 pada alamat yg ditunjuk 'ptr'
    cout << "Isi variabel ptr " << *ptr << " dan alamat " << &ptr << endl;

    delete ptr; // pembebasan memori yang dipinjam
    cout << "Isi variabel ptr " << *ptr << " dan alamat " << &ptr << endl;
}   
