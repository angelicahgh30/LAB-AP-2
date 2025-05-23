#include <iostream>
using namespace std;

int main(){
    string kalimat;
    int i;

    system("CLS");

    cout << "Masukkan kalimat : ";
    getline(cin, kalimat);

    // a n g e l
    for(i = 0; i < kalimat.length(); i++) {
        kalimat[i] = toupper(kalimat[i]);
    }

    cout << "Kalimat dalam huruf kapital : " << kalimat << endl;

    return 0;
}