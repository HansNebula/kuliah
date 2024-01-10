/*
Nama   	: Hatfan Sahrul Ramadhan
NRP 		: 5223600004
Kelas 	: 1 GT A        */

#include <iostream>
#include <vector>
using namespace std;

int isPrima(int num) {
    if (num < 2)
        return 0;

    for (int i = 2; i < num; ++i) {
        if (num % i == 0)
            return 0;
    }

    return 1;
}

void keluaranPrima(int x) {
    vector<int> primes;

    for (int i = 2; i < x; ++i) {
        if (isPrima(i))
            primes.push_back(i);
    }

    cout << "Bilangan prima yang kurang dari " << x << " adalah: ";
    for (int prime : primes) {
        cout << prime << " ";
    }
    cout << "\n";
}

int main() {
    int x;
    cout << "Masukan angka : ";
    cin >> x;

    keluaranPrima(x);

    return 0;
}
