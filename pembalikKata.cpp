#include <iostream>
#include <string>

using namespace std;

void palindrom(string kata){
    bool isPalindrom=false;
    int panjang=kata.length();
    isPalindrom=true;
    for(int i=0;i<panjang;i++){
        if(kata[i]!=kata[panjang-1-i]){
            isPalindrom=false;
        }
    }
    if(isPalindrom){
        cout<<"kata "<<kata<<" adalah kata palindrom";
    }else{
        cout<<"kata "<<kata<<" bukan palindrom";
    }
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
        clearBuffer();
    }while(sudah=="y");
	return 0;
}