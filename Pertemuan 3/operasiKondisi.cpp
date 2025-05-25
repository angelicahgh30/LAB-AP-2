#include <iostream>
using namespace std;

int main () {
    int nilai;

    system("CLS");

    cout << "Masukkan nilai : ";
    cin >> nilai;

    // if statement
    if (nilai <= 65) {
        cout << "Anda tidak lulus!" << endl; // Menampilkan pesan jika nilai <= 65
    }

    // if - else statement
    if (nilai <= 65) {
        cout << "Anda tidak lulus!" << endl;
    } else {
        cout << "Anda lulus !" << endl;
    }

    if - else - if statement
    if (nilai == 100) {
        cout << "Anda Keceh" << endl;
    } else if (nilai <= 65) {
        cout << "Anda tidak lulus" << endl;
    } else {
        cout << "Anda lulus" << endl;
    }

    // nested if
    if (nilai <= 65) {
        cout << "Anda tidak lulus" << endl;
    } else {
        if (nilai == 100) {
            cout << "Anda lulus dan Anda Hebat" << endl;
        } else {
            cout << "Anda lulus" << endl;
        }
    }

    // switch case => percabangan untuk memilih satu dari banyak case berdasarkan nilai variabel yang dipakai
    switch (nilai) {
        case 1:
            cout << "Senin" << endl; // saat nilai = 1, maka akan menampilkan "senin"
            break; // untuk menghentikan eksekusi setelah satu blok kode case dijalankan, biar gak lanjut ke case dibawahnya
        case 2:
            cout << "Selasa" << endl;
            break;
        case 3:
            cout << "Rabu" << endl;
            break;
        case 4:
            cout << "Kamis" << endl;
            break;
        case 5:
            cout << "Jumat" << endl;
            break;
        case 6:
            cout << "Sabtu" << endl;
            break;
        case 7:
            cout << "Minggu" << endl;
            break;
        default: // blok kode default akan dieksekusi jika nilai dari variabel 'nilai' tidak ada yang cocok dengan case
            cout << "Hari Tidak Ada!\n";
            cout << "Inputan tidak valid" << endl;
            break;
    }

    
    // switch range => switch yang memiliki range/jangkauan pada tiap case-nya
    switch (nilai) {
        case 85 ... 100: // saat isi dari variabel 'nilai' berada pada range 85-100, maka blok kodenya akan dieksekusi
            cout << "A\n"; // akan menampilakn nilai A saat nilai berada pada range 85-100
            break;
        case 80 ... 84:
            cout << "B+\n";
            break;
        case 75 ... 79:
            cout << "B\n";
            break;
        case 70 ... 74:
            cout << "C+\n";
            break;
        case 65 ... 69:
            cout << "C\n";
            break;
        case 60 ... 64:
            cout << "D\n";
            break;
        default:
            cout << "E\n";
            break;
        
    }

    // Ternary Operator => bentuk dari operator kondisional if-else yg ditulis dalam 1 baris
    if (nilai % 2 == 0) {
        cout << "Genap sih" << endl;
    } else {
        cout << "Ganjil sih" << endl;
    }

    a > 5 ? 9 : 6
    string checkNum = (nilai % 2 == 0) ? "Genap" : "Ganjil"; // saat (nilai%2 == 0) bernilai true, maka memilih "Genap", jika false maka memilih "Ganjil"
    cout << nilai << " Adalah bilangan " << cek_angka << endl;
    cout << nilai << " tuh Bilangan " << checkNum << " sih " << endl;
}
