#include <iostream>
using namespace std;

int main () {
    int a, b;

    system("CLS");

    // Assignment Operator
    a = 3;
    b = 5;

    // Arithmetical Operator, yaitu operator untuk operasi matematika
    int tambah = a + b;
    int kurang = a - b;
    int kali = a * b;
    float bagi = (float)a / (float)b; // type casting : berguna untuk mengubah tipe data dari sebuah variabel
    int modulo = a % b;

    cout << "Hasil penjumlahan = " << tambah << endl;
    cout << "Hasil pengurangan = " << kurang << endl;
    cout << "Hasil perkalian = " << kali << endl;
    cout << "Hasil pembagian = " << bagi << endl;
    cout << "Hasil sisa bagi = " << modulo << endl;

    // Relational Operator untuk membandingkan 2 nilai yang menghasilkan boolean 
    cout << (a==b) << endl;
    cout << (a<b) << endl;
    cout << (a<=b) << endl;
    cout << (a>b) << endl;
    cout << (a>=b) << endl;
    cout << (a!=b) << endl;

    // Logical Operator (&&,||, !) => untuk menggabungkan 2 atau lebih kondisi logika yang menghasilkan boolean
    cout << (true && true) << endl; // AND
    cout << (true && false) << endl;
    cout << (false && true) << endl;
    cout << (false && false) << endl;

    cout << (true || true) << endl; // OR
    cout << (true || false) << endl;
    cout << (false || true) << endl;
    cout << (false || false) << endl;

    cout << !true << endl; // NEGASI
    cout << !false << endl;

    // Bitwise Operator (&, |, ^, ~, >>, <<) --> biner, untuk operasi bit-level
    cout << (5&7) << endl;
    cout << (5|7) << endl;
    cout << (5^7) << endl;
    cout << (~7) << endl;
    cout << (7 << 2) << endl;
    cout << (7 >> 2) << endl;

    // Shorthand
    a += 7; // a = a + 7;
    cout << a << endl;

    a -= 7; // a = a - 7;
    cout << a << endl;

    a *= 7; // a = a * 7;
    cout << a << endl;

    a /= 7; // a = a / 7;
    cout << a << endl;

    a %= 7; // a = a % 7;
    cout << a << endl;

    // Increment, Decrement
    
    // Pre Increment -> menambah nilai variabel sebelum ditampilkan
    a = 3;
    b = 5;
    
    cout << a << endl;
    cout << ++a << endl;

    cout << b << endl;
    cout << ++b << endl;

    // Post Increment => menambah nilai variabel saat ditampilkan
    cout << a << endl;
    cout << a++ << endl;
    cout << a << endl;

    cout << b << endl;
    cout << b++ << endl;
    cout << b << endl;

    // Pre Decrement =>  mengurangkan nilai variabel sebelum ditampilkan
    cout << a << endl;
    cout << --a << endl;

    cout << b << endl;
    cout << --b << endl;

    // Post Decrement => mengurangkan nilai variabel saat ditampilkan
    cout << a << endl;
    cout << a-- << endl;
    cout << a << endl;

    cout << b << endl;
    cout << b-- << endl;
    cout << b << endl;

}
