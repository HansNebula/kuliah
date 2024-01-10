/*
Nama   	: Hatfan Sahrul Ramadhan
NRP 		: 5223600004
Kelas 	: 1 GT A        */

#include <iostream>
#include <vector>
using namespace std;

void cariFaktor(int x) {
    cout << "Faktor dari " << x << " adalah: ";
    for (int i = 1; i <= x; ++i) {
        if (X % i == 0) {
            cout << i << " ";
        }
    }
    cout << "\n";
}

int main() {
    int x;
    cout << "Masukan angka: ";
    cin >> x;

    cariFaktor(x);

    return 0;
}
