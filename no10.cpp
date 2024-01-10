/*
Nama   	: Hatfan Sahrul Ramadhan
NRP 	: 5223600004
Kelas 	: 1 GT A        */

#include <iostream>
using namespace std;
unsigned long long hitungFaktorial(int x) {
    unsigned long long result = 1;

    for (int i = 2; i <= x; ++i) {
        result *= i;
    }

    return result;
}

int main() {
    int x;
    cout << "Masukan angka: ";
    cin >> x;

    if (x < 0) {
        cout << "Tidak dapat memfaktorialkan bilangan negatif\n";
        return 0;
    }

    unsigned long long hasil = hitungFaktorial(x);

    cout << "Faktorial dari " << x << " adalah: " << hasil << "\n";

    return 0;
}
