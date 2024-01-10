#include <iostream>

int main() {
    // Menampilkan bintang sebanyak lima baris dan lima kolom
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            std::cout << "*";
        }
        std::cout << std::endl;  // Pindah ke baris baru setelah mencetak lima bintang
    }

    return 0;
}
