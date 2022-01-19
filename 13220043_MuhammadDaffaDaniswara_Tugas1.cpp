#include <iostream>
using namespace std;

// Muhammad Daffa Daniswara
// 13220043
// Program waterjug

int main() {
    int A = 0;
    int B = 0;
    int temp = 0;

    while (B != 4) {
        cout << ">> Isi A: "<< A << "     " << "Isi B: " << B << endl;
        cout << "1. Isi ember A 3 liter." << endl;
        cout << "2. Isi ember B 5 liter." << endl;
        cout << "3. Kosongkan ember A." << endl;
        cout << "4. Kosongkan ember B." << endl;
        cout << "5. Tuang isi ember A ke ember B." << endl;
        cout << "6. Tuang isi ember B ke ember A." << endl;

        cout << "Tulis instruksi yang ingin dilakukan: ";
        int perintah;
        cin >> perintah;
        cout << "\n";


        if (perintah == 1){
            A = 3;
        }
        else if (perintah == 2){
            B = 5;     
        }
        else if (perintah == 3){
            A = 0;     
        }
        else if (perintah == 4){
            B = 0;      
        }
        else if (perintah == 5){
            temp = max(0, (A+B-5));
            B = min(5, (A+B));  
            A = temp;  
        }
        else if (perintah == 6){
            temp = min(3, (A+B));
            B = max(0, (A+B-3));
            A = temp;      
        }                
        else{
            cout << ">> Instruksi tidak ditemukan." << endl << endl;
        }
    }
    cout << endl << ">> Isi A: "<< A << "     " << "Isi B: " << B << endl;
    cout << "Selamat kamu berhasil!" << endl;
  return 0;
}