#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int x, y, sudut;

    cout << "Masukkan koordinat x y: ";
    cin >>x>>y;

    cout << "Masukkan sudut rotasi (derajat): ";
    cin >> sudut;

    double teta = sudut * M_PI / 180.0;
    double rX = round(x * cos(teta) - y * sin(teta));
    double rY= round(x * sin(teta) + y * cos(teta));

    cout << "Hasil rotasi: (" << rX << ", " << rY << ")" << endl;
	
	return 0;

}