/*
Nama   	: Hatfan Sahrul Ramadhan
NRP 	: 5223600004
Kelas 	: 1 GT A        */

#include <iostream>
using namespace std;
int main() {
    int n = 5;

    for (int i = n; i >= 1; --i) {
        for (int j = 1; j <= i; ++j) {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}
