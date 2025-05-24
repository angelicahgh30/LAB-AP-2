#include <iostream>

using namespace std;

int main() {
    int angka;
    cout << "Masukkan sebuah bilangan bulat: ";
    cin >> angka;

    if (angka % 10 == 0) {
        cout << angka << " adalah kelipatan dari 10." << endl;
    } else if (angka % 5 == 0) {
        cout << angka << " adalah kelipatan dari 5." << endl;
    } else {
        cout << angka << " bukan kelipatan dari 5 atau 10." << endl;
    }

 return 0;
}