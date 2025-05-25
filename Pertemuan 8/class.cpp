#include <iostream>
using namespace std;

// Struktur dari Class
// class nama_class{
//     private:
//         anggota_private;
//     protected:
//         anggota_protected;
//     public:
//         anggota_public;
// };

class ContohAkses {
    private: // anggota yang hanya bisa diakses oleh class itu sendiri
        int privateVar;
    
    protected: // anggota yang bisa diakses oleh parent dan child class
        int protectedVar;

    public: // anggotanya bisa diakses dari luar class
        int publicVar;

    // Constructor => fungsi khusus yang akan otomatis dipanggil saat objek dibuat
     ContohAkses() {  // ini constructor
        privateVar = 1;
        protectedVar = 2;
        publicVar = 3;
    }

    // Method => fungsi-fungsi di dalam class
    void tampilkanSemua() { // merupakan method
        cout << "Akses dari dalam class : " << endl;
        cout << privateVar << endl;
        cout << protectedVar << endl;
        cout << publicVar << endl;
    }
    void tampilkanNama(string namaku){ // merupakan method
        string nama = namaku;
        cout << "Nama saya adalah " << nama << endl;
    }
};

// kelas turunan (child class)
class Turunan : public ContohAkses { // class turunan bisa mewarisi semua atribut milik class 'contoh_akses'
    public:
    void aksesProtected() { // membuat method
        cout << protectedVar << endl;
        cout << publicVar << endl;
         // cout << "Akses privateVar : " << privateVar << endl; Akan error, karena hanya bisa diakses oleh class parent
    }
};

int main () {
    ContohAkses objek; // deklarasi variabel bertipe 'contoh_akses'
    objek.tampilkanSemua(); // memanggil method
    objek.tampilkanNama("Angelica"); // memanggil method dengan parameter aktual berupa string

    cout << "\nAkses dari luar class : " << endl;
    // cout << obj.privateVar << endl; // error 
    // cout << obj.protectedVar << endl; // error
    cout << obj.publicVar << endl;

    cout <<"\nAkses dari kelas Turunan " << endl;
    Turunan tur;
    tur.aksesProtected();
}
