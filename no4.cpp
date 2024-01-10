/*
Nama   	: Hatfan Sahrul Ramadhan
NRP 	: 5223600004
Kelas 	: 1 GT A        */

#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Masukkan x: ";
    cin >> x;

    if (x < 1) {
        cout << "nilai x harus lebih dari 0 (nol)" << endl;
        return 1;
    }

    int a = 0, b = 1;
    cout << "Output =\t";

    for (int i = 0; i < x; ++i) {
        cout << b << "\t";

        int c = a + b;
        a = b;
        b = c;
    }

    return 0;
}