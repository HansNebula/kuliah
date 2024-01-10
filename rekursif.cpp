#include <iostream>
using namespace std;

int faktorial(int i){
	if(i>1){
		return i*faktorial(i-1);
	}else{
		return 1;
	}
}
int main(){
	int x;
	cout<<"Masukan Angka : ";
	cin>>x;
	
	cout<<x<<"!="<<faktorial(x);
	return 0;	
}