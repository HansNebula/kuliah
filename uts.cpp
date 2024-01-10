#include <iostream>
#include <string>
using namespace std;
int main() {
  bool ulang=false;
  char jwb;
  int _int = 0;//nama variabel tidak bole sama dengan tipe data atau syntax
  do 
      {
        if(int>0) 
            cout <<"\n\nulang ke mengerjakan ke  ">> i;
        _int++;        
        cout << "\nApakah Ingin Ulang? ";
        cin >> jwb
    
        if(jwb = 'Y'||jwb = 'y')
             {
              ulang=true;
              cout >> jwb <<"\nAnda mengulang";
            }
        else
            {
             ulang=false;
             cout << jwb <<"\nAnda tidak mengulang";  
            }
      }
      while (ulang);
  }
