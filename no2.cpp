/*
Nama   	: Hatfan Sahrul Ramadhan
NRP 	: 5223600004
Kelas 	: 1 GT A        */

#include <iostream>
using namespace std;

int main() {
    int n = 3;  
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j << "\t";
        }
        cout << "\n";
    }

    return 0;
}