#include <iostream>
using namespace std;

void hitung(int bm1,int km1,int bm2,int km2){
	int matriks1[bm1][km1], matriks2[bm2][km2],hasil[km1][bm2], jumlah;
	
	cout << "Masukkan elemen matriks pertama: \n";
    for(int i = 0; i < bm1; i++){
      for(int j = 0; j < km1; j++){
        cin >> matriks1[i][j];
      }
    }

    cout << "Masukkan elemen matriks kedua: \n";
    for(int i = 0; i < bm2; i++){
      for(int j = 0; j < km2; j++){
        cin >> matriks2[i][j];
      }
    }

    for(int i = 0; i < bm1; i++){
      for(int j = 0; j < km2; j++){
        for(int k = 0; k < bm2; k++){
          jumlah = jumlah + matriks1[i][k] * matriks2[k][j];
        }
        hasil[i][j] = jumlah;
        jumlah = 0;
      }
    }
	cout << "Matriks 1: \n";
    for(int i = 0; i < bm1; i++){
      for(int j = 0; j < km1; j++){
        cout << matriks1[i][j] << "\t";
      }
      cout << "\n";
    }
	cout << "Matriks 2: \n";
    for(int i = 0; i < bm2; i++){
      for(int j = 0; j < km2; j++){
        cout << matriks2[i][j] << "\t";
      }
      cout << "\n";
    }
    cout << "Hasil perkalian matriks: \n";
    for(int i = 0; i < bm1; i++){
      for(int j = 0; j < km2; j++){
        cout << hasil[i][j] << "\t";
      }
      cout << endl;
    }
}
int main() {
  
  int x, y, a, b, jumlah = 0;
  cout << "Masukkan jumlah baris matriks pertama: ";
  cin >> x;
  cout << "Masukkan jumlah kolom matriks pertama: ";
  cin >> y;
	
  cout << "Masukkan jumlah baris matriks kedua: ";
  cin >> a;
  cout << "Masukkan jumlah kolom matriks kedua: ";
  cin >> b;
	
	
	
	
  if(y != a){
    cout << "Matriks tidak dapat dikalikan satu sama lain.\n";
  } else {
	hitung(x,y,a,b);
  }
  
  return 0;
}