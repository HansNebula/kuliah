#include <iostream>
#include <string>

using namespace std;

void palindrom(string kata){
    bool isPalindrom=false;
    string kataTerbalik;
    int panjang=kata.length();
    isPalindrom=true;
    kataTerbalik=kata;
    for(int i=0;i<panjang;i++){
        
        kataTerbalik[i]=kata[panjang-1-i];//untuk membalik kata
        if(kata[i]!=kata[panjang-1-i]){
            isPalindrom=false;
        }
    }
    if(isPalindrom){
        cout<<"kata "<<kata<<" adalah kata palindrom";
    }else{
        cout<<"kata "<<kata<<" bukan palindrom";
    }
	cout<<"\nPanjang Karakter : "<<panjang;
    cout<<"\nkata terbalik : "<<kataTerbalik;
}
void clearBuffer() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}
int main(){
    string kata, sudah;
    
    do{
        cout<<"Masukan kata : ";
        getline(cin,kata);
        palindrom(kata);
        cout<<"\napakah ingin mengulangi? (y/t) : ";
        cin>>sudah;
        clearBuffer();//untuk cleaar buffer dan untuk menjeda program, tanpa fungsi ini maka proses input tidak akan terjadi setelah menjawab pertanyaan terakhir
    }while(sudah=="y");
	return 0;
}