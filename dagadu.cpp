//Nama : Hatfan Sahrul Ramadhan
//NRP : 5223600004

#include <iostream>
#include <string>

using namespace std;

void clearBuffer() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}
int main() {
    string input;
    string basic[4][5] = {{"h", "n", "c", "r", "k"},
                          {"d", "t", "s", "w", "l"},
                          {"p", "dh", "j", "y", "ny"},
                          {"m", "g", "b", "th", "ng"}};
    string replace[4][5] = {{"p", "dh", "j", "y", "ny"},
                            {"m", "g", "b", "th", "ng"},
                            {"h", "n", "c", "r", "k"},
                            {"d", "t", "s", "w", "l"}};
    do {
        int mode;
        string jd;
        cout << "Konverter Bahasa Jawa-Dagadu\n1.Jawa ke Dagadu\n2.Dagadu ke Jawa\nPilih menu : ";
        cin>>mode;
        switch(mode){
            case 1:
                jd="Jawa ke Dagadu";
                break;
            case 2:
                jd="Dagadu ke Jawa";
                break;
            default:
                cout<<"Tidak Valid";
                input="x";
                break;
        }
        clearBuffer();//Untuk clear buffer agar dapat menginput variable selanjutnya
        cout<<jd<<". Masukan kata (huruf kecil) : ";
        getline(cin, input);
        
        string result = "";
        bool isN = false;//khusus untuk huurf 'n' selalu tertukar dengan 'ny'. ini untuk memastikan bahwa n bukan ny maupun ng
        //ketika input "nana" maka output "dhadha" (benar), tetapi jika input "nan" mka output "dhak" (salah). saya simpulkan n hanya terbaca jika memiliki huruf setelahnya
        if (input[0] == 'a' || input[0] == 'i' || input[0] == 'u' || input[0] == 'e' || input[0] == 'o') 
            input = "h" + input;

        if (input.back() == 'n') {
            input += "a";//untuk menambahkah huruf 'a' pada akhir input
            isN = true;
        }

        for (size_t i = 0; i < input.size(); i++) {
            bool found = false;

            for (int j = 0; j < 4; j++) {
                for (int k = 0; k < 5; k++) {
                    if (replace[j][k].find(input.substr(i, replace[j][k].size())) != string::npos) {//untuk mencari pasangan dari array replace
                        result += basic[j][k];
                        i += replace[j][k].size() - 1;  
                        found = true;
                        break;
                    }
                }
                if (found) {
                    break;
                }
            }

            if (!found) {
                result += input[i];
            }
        }

        if (isN && !result.empty() && result.back() == 'a') {
            result.pop_back();//untuk menhapus huruf a yang telah ditambahkan pada n tadi
        }

        cout << "Hasil : " << result << "\t(Ketik x untuk keluar)\n" << endl;
    } while (input != "x");

    return 0;
}
