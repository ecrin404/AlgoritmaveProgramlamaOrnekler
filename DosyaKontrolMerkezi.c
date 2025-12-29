#include <stdio.h>

// argc: arguman sayisi, argv: arguman listesi
int main(int argc, char *argv[]) {
    
    // Arguman kontrolü 
    if (argc < 2) {
        printf("Kullanim: %s <dosya_adi>\n", argv[0]);
        return 1;
    }

    FILE *fPtr; // Dosya gostericisi tanimi 
    char *dosya = argv[1]; // Komut satirindan gelen isim 
    int karakter;

    // YAZMA MODU (w): Dosya varsa siler, yoksa acar 
    fPtr = fopen(dosya, "w");
    if (fPtr == NULL) { // Acilamazsa NULL doner 
        puts("Dosya acilamadi");
        return 1;
    }
    fprintf(fPtr, "Dosya Islemleri Testi\n"); // Formatli yazma 
    fclose(fPtr); // Acilan her dosya kapatilmalidir 

    // EKLEME MODU (a): Var olan verinin sonuna ekler 
    fPtr = fopen(dosya, "a");
    if (fPtr != NULL) {
        fputs("Yeni veriler eklendi.\n", fPtr); // Satir ekleme 
        fclose(fPtr);
    }

    // OKUMA MODU (r): Sadece okuma yapar 
    fPtr = fopen(dosya, "r");
    if (fPtr != NULL) {
        printf("\n--- Karakter Karakter Okuma ---\n");
        // fgetc: dosyadan karakter okur 
        while ((karakter = fgetc(fPtr)) != EOF) { // EOF: Dosya sonu sabiti 
            fputc(karakter, stdout); // fputc: karakteri ekrana basar 
        }

        // REWIND: Dosya gostericisini tekrar basa sarar 
        rewind(fPtr); 

        printf("\n--- FEOF ile Kontrollu Okuma ---\n");
        // feof: dosya sonu gostergesini test eder 
        while (!feof(fPtr)) {
            karakter = fgetc(fPtr);
            if (karakter != EOF) {
                printf("%c", karakter);
            }
        }
        fclose(fPtr); // Kapatma basariliysa 0 doner 
    }

    return 0;
}