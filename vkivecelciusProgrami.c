#include <stdio.h>

int main()
{
    int yas, secim;
    char cinsiyet;
    float kilo, boy, vki, f, c;

    printf("Yasinizi giriniz: ");
    scanf("%d", &yas);

    printf("Cinsiyetinizi giriniz (E/K): ");
    scanf(" %c", &cinsiyet); // Bosluk %c oncesi buffer temizler

    printf("\n--- Bilgiler ---\n");
    printf("Yas: %d, Cinsiyet: %c\n\n", yas, cinsiyet);

    while (1)
    {
        printf("1 - VKI Hesapla\n");
        printf("2 - Fahrenheit -> Celcius\n");
        printf("0 - Cikis\n");
        printf("Seciminiz: ");
        scanf("%d", &secim);

        if (secim == 0) break; // Donguden cikis

        switch (secim)
        {
        case 1:
            printf("Kilo (kg): ");
            scanf("%f", &kilo);
            printf("Boy (m): ");
            scanf("%f", &boy);

            if (kilo > 0 && boy > 0) {
                // VKI Formulu: kilo / (boy * boy)
                vki = kilo / (boy * boy);
                printf("VKI: %.2f\n", vki);

                if (vki < 18.5) printf("Durum: Zayif\n");
                else if (vki <= 24.9) printf("Durum: Saglikli\n");
                else printf("Durum: Doktora danisiniz\n");
            } else {
                printf("Hatali giris!\n");
            }
            break;

        case 2:
            printf("Fahrenheit: ");
            scanf("%f", &f);
            c = (f - 32) * 5.0 / 9.0;
            printf("Celcius: %.2f\n", c);

            if (c <= 10) printf("Hava: Soguk\n");
            else if (c <= 25) printf("Hava: Ilik\n");
            else printf("Hava: Sicak\n");
            break;

        default:
            printf("Gecersiz secim!\n");
        }
        printf("\n");
    }
    return 0;
}