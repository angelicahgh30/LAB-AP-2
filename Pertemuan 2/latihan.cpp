#include <iostream>
using namespace std;

int main()
    {
        // Program untuk menentukan volume dan luas sebuah bola
        float luas, volume, jari; // variabel untuk menyimpan luas, volume dan jari-jari bola
        const float phi = 3.14; // konstanta phi dengan nilai 3.14

        cout << "Input jari-jari : "; // meminta pengguna memasukkan jari-jari bola
        cin >> jari; // membaca nilai jari-jari dari input pengguna

        volume = ((float)4/3) * (phi) * (jari*jari*jari); // rumus menghitung volume bola 
        luas = 4 * phi * jari * jari; // rumus menghitung luas permukaan bola 

        cout << "Volume : " << volume << endl; // menampilkan hasil volume bola
        cout << "luas : " << luas << endl; // menampilkan hasil luas permukaan bola
    }
