#include <stdio.h>
#include <stdlib.h>

// Muhammad Daffa Daniswara
// 13220043
// Program waterjug

int main() {
    // KAMUS
    int A = 0;
    int B = 0;
    int temp = 0;
    int perintah;

    int min(int A, int B)
    {
        return (A < B) ? A : B;
    }
    int max(int A, int B)
    {
        return (A > B) ? A : B;
    }

    // ALGORITMA
    while (B != 4) {
        printf(">> Isi A: %d", A);
        printf("      Isi B: %d", B);
        printf("\n");
        printf("1. Isi ember A 3 liter. \n");
        printf("2. Isi ember B 5 liter. \n");
        printf("3. Kosongkan ember A. \n");
        printf("4. Kosongkan ember B. \n");
        printf("5. Tuang isi ember A ke ember B. \n");
        printf("6. Tuang isi ember B ke ember A. \n");

        printf("Tulis instruksi yang ingin dilakukan: ");
        scanf("%d", &perintah);
        printf("\n");


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
            printf(">> Instruksi tidak ditemukan. \n \n");
        }
    }
    printf(">> Isi A: %d", A);
    printf("      Isi B: %d", B);
    printf("\n");
    printf("Selamat kamu berhasil! \n");
  return 0;
}