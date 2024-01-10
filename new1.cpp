#include "myheader.h"
#include <iostream>
using namespace std;
int main() {
    int a = 10;
    int b = 5;

    int hasilPenambahan = tambah(a, b);
    int hasilPengurangan = kurang(a, b);

    cout<<hasilPenambahan<<"\n"<<hasilPengurangan;

    return 0;
}
