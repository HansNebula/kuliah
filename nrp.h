#ifndef NRP_H
#define NRP_H
#include <string>
#include <iostream>



string dte[]={"Teknik Elektronika","Teknik Telekomunikasi","Teknik Elektro Industri"};
string dtik[]={"Teknik Informatika","Telekomunikasi","Elektro Industri", "Sains Data Terapan"};
string dtme[]={"Teknik Mekatronika","Sistem Pembangkit Energi"};
string dtme[]={"Teknologi Multimedia Kreatif","Teknologi Game", "Teknologi Rekayasa Multimedia"};
string cJen[]={"S2","D3","D4"};
string cdep[]={"Tidak Tahu","DTE","DTIK","DTME"};


string checkNRP(string no_nrp){
	string depart, prodi=,angk=no_nrp.substr(2,2),jenjang=no_nrp.substr(4,1),kelas=no_nrp.substr(9,1);
	
	if(no_nrp.substr(0,1)=="1"){
		depart=cdep[0];
		if(no_nrp.substr(1,1)=="1"){
			
		}
	}
}


#endif
