/*
Nama   	: Hatfan Sahrul Ramadhan
NRP 	: 5223600004
Kelas 	: 1 GT A        */

#include <iostream>
using namespace std;
int cariFPB(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int x, y;
    cout << "masukan dua angka (a dan b): ";
    cin >> x >> y;

    int fpb= cariFPB(x, y);

    cout << "FPB dari " << x << " dan " << y<< " adalah: " << fpb << "\n";

    return 0;
}
