//Hatfan Sahrul Ramadhan_5223600004

#include <iostream>
#include <cmath>
using namespace std;

void kubus();
void tabung();
void balok();

void clearBuffer() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}


int main() {
	char choice;
	do{
		int a;
		cout << "1. Kubus\n2. Tabung\n3. Balok\nPilih bangun ruang: ";
		cin >> a;
		cout << "\n";

		switch (a) {
			case 1:
				kubus();
				break;
			case 2:
				tabung();
				break;
			case 3:
				balok();
				break;
			default:
				cout << "Input tidak valid";
				break;
		}
		cout << "Apakah ingin menghitung lagi? (y/n) : ";
		cin >> choice;
		clearBuffer();
	}while(choice=='y'||choice=='Y');
    return 0;
}

void kubus() {
    double s;
    char c;

    cout << "Pilih operasi :\na. volume kubus\nb. luas permukaan kubus\nPilih : ";
    cin >> c;

    switch (c) {
        case 'a':
            cout << "Masukkan sisi kubus (cm): ";
            cin >> s;
            cout << "\n\nVolume kubus dengan sisi " << s << " cm adalah : " << pow(s,3) << " cm(kubik)\n\n";
            break;
        case 'b':
            cout << "Masukkan sisi kubus (cm): ";
            cin >> s;
            cout << "\n\nLuas permukaan kubus dengan sisi " << s << " cm adalah : " << pow(s,2)*6 << " cm(persegi)\n\n";
            break;
        default:
            cout << "Input tidak valid";
            break;
    }
}

void tabung() {
    double d, t;
    char c;

    cout << "Pilih operasi :\na. volume tabung\nb. luas permukaan tabung\nPilih : ";
    cin >> c;

    switch (c) {
        case 'a':
            cout << "Masukkan diameter alas tabung (cm): ";
            cin >> d;
            cout << "Masukkan tinggi tabung (cm): ";
            cin >> t;
            cout << "\n\nVolume tabung dengan diameter " <<d<<" cm dan tinggi " <<t<< " cm adalah : " <<pow((d/2),2)*(22/7)*t << " cm(kubik)\n\n";
            break;
        case 'b':
            cout << "Masukkan diameter alas tabung (cm): ";
            cin >> d;
            cout << "Masukkan tinggi tabung (cm): ";
            cin >> t;
            cout << "\n\nLuas permukaan tabung dengan diameter " << d << " cm dan tinggi " << t << " cm adalah : " << (pow((d / 2), 2) * 22/7)*2 + (d * 22/7 * t) << " cm(persegi)\n\n";
            break;
        default:
            cout << "Input tidak valid\n\n";
            break;
    }
}

void balok() {
    double p,l,t;
    char c;

    cout << "Pilih operasi :\na. volume balok\nb. luas permukaan balok\nPilih : ";
    cin >> c;

    switch (c) {
        case 'a':
            cout << "Masukkan panjang balok (cm): ";
            cin >> p;
            cout << "Masukkan lebar balok (cm): ";
            cin >> l;
            cout << "Masukkan tinggi balok (cm): ";
            cin >> t;
            cout << "\n\nVolume balok dengan panjang " <<p << " cm, lebar "<<l<<" cm, dan tinggi "<<t<<" cm adalah : " << p*l*t<< " cm(kubik)\n\n";
            break;
        case 'b':
            cout << "Masukkan panjang balok (cm): ";
            cin >> p;
            cout << "Masukkan lebar balok (cm): ";
            cin >> l;
            cout << "Masukkan tinggi balok (cm): ";
            cin >> t;
            cout << "\n\nVolume balok dengan panjang " <<p<< " cm, lebar "<<l<<" cm, dan tinggi "<<t<<" cm adalah : " << 2*((p*l)+(l*t)+(p*t))<< " cm(persegi)\n\n";
            break;
        default:
            cout << "Input tidak valid";
            break;
    }
}
