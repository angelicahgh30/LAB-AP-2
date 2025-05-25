#include<iostream>
#include<string>
using namespace std;

struct Mahasiswa {
    string nama;
    int umur;
    float ipk;
};

int main() {
    Mahasiswa mhs1;

    // Mengisikan data struct
    mhs1.nama = "Angelica";
    mhs1.umur = 19;
    mhs1.ipk = 4.00;

    
    // Mengakses value dengan titik (.)
    cout << "Akses dengan . : " << endl;
    cout << "Nama : " << mhs1.nama << endl;
    cout << "Umur : " << mhs1.umur << endl;
    cout << "IPK : " << mhs1.ipk << endl;

    // Mengakses value(nilai) dengan tanda panah (->) dalam pointer
    Mahasiswa *ptrMhs = &mhs1;
    cout << "Akses dengan -> : " << endl;
    cout << "Nama : " << ptrMhs->nama << endl;
    cout << "Umur : " << ptrMhs->umur << endl;
    cout << "IPK : " << ptrMhs->ipk << endl;

}
