#include<iostream>
#include<string>
#include<vector>
using namespace std;

/*
    Struct merupakan kumpulan variabel dengan tipe data yang berbeda-beda, yang digunakan untuk membuat tipe data baru.
*/

struct Alamat { // membuat tipe data baru bernama 'alamat' yang berisi berbagai variabel
    string jalan;
    string kota;
    int kodePos;
};

struct Mahasiswa {
    string nama;
    int umur;
    float ipk;
    // Nested struct
    // => Terdapat struct di dalam struct
    Alamat alamat; // nested struct
};

int main () {
    system("CLS");
    Mahasiswa mhs1; // deklarasi variabel 'mhs1' dengan tipe data 'Mahasiswa'


    // mhs1.alamat.jalan = "Jalan Jamin Ginting";
    // mhs1.alamat.kota = "Medan";
    // mhs1.alamat.kodePos = 20155;

    // cout << "Alamat : " << mhs1.alamat.jalan << " " << mhs1.alamat.kota << " " << mhs1.alamat.kodePos << endl;

    vector<Mahasiswa> mahasiswa; // deklarasi variabel 'mahasiswa' yang berupa vector dengan tipe data 'Mahasiswa'
    int n;
    cout << "Masukkan banyak mahasiswa : ";
    cin >> n;

    // Membuat inputan biodata dengan for loop
    for(int i = 0; i < n; i++) {
        cout << "Mahasiswa " << i + 1 << endl;

        cin.get(); // digunakan untuk menyerap buffer/newline setelah inputan
        cout << "Masukkan nama : ";
        getline(cin, mhs1.nama);

        cout << "Masukkan umur : ";
        cin >> mhs1.umur;

        cout << "Masukkan ipk : ";
        cin >> mhs1.ipk;

        mahasiswa.push_back(mhs1); // memasukkan variabel 'mhs1' kedalam vector 'mahasiswa'
    }

    // menampilkan output biodata dengan for loop
    for(int i = 0; i < n; i++){
        cout << "Mahasiswa " << i + 1 << endl;
        cout << "Nama : " << mahasiswa[i].nama << endl;
        cout << "Umur : " << mahasiswa[i].umur << endl;
        cout << "IPK : " << mahasiswa[i].ipk << endl;
    }

}
