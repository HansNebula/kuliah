#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double sudut, x, y;
    cout << "Masukkan koordinat x y: ";
    cin >> x >> y;
    cout << "Rotasikan ke sudut: ";
    cin >> sudut;

    double c = cos(sudut* M_PI / 180);
    double s = sin(sudut* M_PI / 180);

    double n[2][1] = {{x},{y}};
    double rumus[2][2] = {{c, -1*s}, {s, c}};
    double hasil[1][2] = {{0, 0}}; 

    for (int i = 0; i < 1; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                hasil[i][j] +=round(n[i][k] * rumus[k][j]);
            }
        }
    }

    cout << "Hasil rotasi: ";
    for (int i = 0; i < 1; i++) {
        for (int j = 0; j < 2; j++) {
            cout << hasil[i][j] << " ";
        }
    }

    return 0;
}
