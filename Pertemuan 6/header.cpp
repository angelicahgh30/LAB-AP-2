#include <iostream>
#include <cmath>

using namespace std;

int jumlah (int a, int b) {
    return a + b;
}

int kurang (int a, int b) {
    return a - b;
}

int main (){
    system ("CLS");

    int n;
    cout << jumlah (2,3)  << endl;
    cout << kurang(2,3)  << endl;

    double angka = 25.0 ;
    double akar = sqrt (angka);
    cout << "Akar kuadrat dari  " << angka << "adalah : " << akar << endl;
}