#include <iostream>
#include <string>
using namespace std;
//Hatfan Sahrul Ramadhan (522360004)
string bulanKe(string x){
	if(x=="01"){return "Januari";}
	else if(x=="02"){return "Februari";}
	else if(x=="03"){return "Maret";}
	else if(x=="04"){return "April";}
	else if(x=="05"){return "Mei";}
	else if(x=="06"){return "Juni";}
	else if(x=="07"){return "Juli";}
	else if(x=="08"){return "Agustus";}
	else if(x=="09"){return "September";}
	else if(x=="10"){return "Oktober";}
	else if(x=="11"){return "Nopember";}
	else if(x=="12"){return "Desember";}
	else{return "Bulan tidak valid";}
}
	
void cekDataNIP(string x){
	string tahun=x.substr(0,4);
	string bulan=x.substr(4,2);
	string tgl=x.substr(6,2);
	string thAng=x.substr(8,4);
	string blAng=x.substr(12,2);
	string gdr=x.substr(14,1);
	string no_urut=x.substr(15,3);
	
	if(gdr=="1"){
		gdr="Laki-laki";
	}else if(gdr=="2"){
		gdr="Perempuan";
	}else{
		gdr="Gender tidak valid";
	}
	bulan=bulanKe(bulan);
	blAng=bulanKe(blAng);
	cout<< "Lahir pada tanggal "<<tgl<<" "<<bulan<<" "<<tahun<<", "<<gdr<<" dan diangkat pada bulan "<<blAng<<" "<<thAng<<" Nomor urut "<<no_urut;
}

	
int main(){
	string NIP;
	cout<<"Masukan NIP";
	cin>>NIP;
	if(NIP.length()!=18){
		cout<<"Input tidak valid";
	}else{
	cekDataNIP(NIP);
	}
	
	return 0;
}