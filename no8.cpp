/*
Nama   	: Hatfan Sahrul Ramadhan
NRP 	: 5223600004
Kelas 	: 1 GT A        */

#include <iostream>
using namespace std;
int rumus(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int cariKPK(int a, int b) {
    return (a * b) / rumus(a, b);
}

int main() {
    int x, y;
    cout << "masukan dua angka(a dan b): ";
    cin >> x >> y;

    int kpk = cariKPK(x, y);

    cout << "KPK dari " << x << " dan " << y << " adalah: " << kpk << "\n";

    return 0;
}
