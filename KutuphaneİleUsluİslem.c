#include <stdio.h>
#include <math.h> // Matematiksel islemler icin

int main() {
    double taban, us, sonuc;

    // Kullanicidan veri alma islemi
    printf("Taban degerini giriniz: ");
    scanf("%lf", &taban);
    
    printf("Us degerini giriniz: ");
    scanf("%lf", &us);

    // pow(x, y) fonksiyonu x uzeri y islemini yapar 
    sonuc = pow(taban, us);

    // Sonucu ekrana yazdirma
    printf("%.2f uzeri %.2f sonucu: %.2f\n", taban, us, sonuc);

    return 0;
}