//Nama : Hatfan Sahrul Ramadhan
//NRP : 5223600004
#include <iostream>
using namespace std;
int main() {
    double sisi1, sisi2, sisi3;
    bool sembarang=true;
    // Memasukkan panjang sisi segitiga
    cout << "Masukkan panjang sisi pertama: ";
    cin >> sisi1;
    cout << "Masukkan panjang sisi kedua: ";
    cin >> sisi2;
    cout << "Masukkan panjang sisi ketiga: ";
    cin >> sisi3;
    // Menentukan bentuk segitiga
    if (sisi1 == sisi2 && sisi2 == sisi3) {
        cout << "Segitiga Sama Sisi" << endl;
        sembarang=false;
    } if (sisi1 == sisi2 || sisi1 == sisi3 || sisi2 == sisi3) {
        cout << "Segitiga Sama Kaki" << endl;
        sembarang=false;
    } if (sisi1 * sisi1 + sisi2 * sisi2 == sisi3 * sisi3 ||
        sisi1 * sisi1 + sisi3 * sisi3 == sisi2 * sisi2 ||
        sisi2 * sisi2 + sisi3 * sisi3 == sisi1 * sisi1) {
        cout << "Segitiga Siku-Siku" << endl;
        sembarang=false;
    }if(sembarang)cout<<"Segitiga Sembarang"<<endl;
    
    return 0;
}