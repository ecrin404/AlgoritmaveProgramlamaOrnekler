#include <stdio.h>
int main()
{
    // 1. Dizi islemleri
    int boyut1;
    printf("1.Dizinin Boyutunu Giriniz : ");
    scanf("%d", &boyut1);
    
    int dizi1[boyut1]; // Boyut kadar yer acilir
    printf("-------------------------------\n");
    printf("1.Dizinin Elemanlarini Giriniz\n");
    printf("-------------------------------\n");
    
    for(int i = 0; i < boyut1; i++)
    {
        scanf("%d", &dizi1[i]); // Eleman girisi
    }

    // 2. Dizi islemleri
    int boyut2;
    printf("2.Dizinin Boyutunu Giriniz : ");
    scanf("%d", &boyut2);
    
    int dizi2[boyut2];
    printf("-------------------------------\n");
    printf("2.Dizinin Elemanlarini Giriniz\n");
    printf("-------------------------------\n");
    
    for(int i = 0; i < boyut2; i++)
    {
        scanf("%d", &dizi2[i]);
    }

    // Birlesik dizi hazirligi
    int dizi3[boyut1 + boyut2];
    int sayac = 0;

    // Birinci diziyi dizi3'e kopyala
    for(int i = 0; i < boyut1; i++)
    {
        dizi3[sayac] = dizi1[i];
        sayac++;
    }

    // Ikinci diziyi dizi3'e kopyala
    for(int i = 0; i < boyut2; i++)
    {
        dizi3[sayac] = dizi2[i];
        sayac++;
    }

    printf("-------------------------------\n");
    printf("\nIki Dizi Birlestirildi...\n\n");
    printf("-------------------------------\n");
    
    // Elemanlari \n ile alt alta yazdirma
    for(int i = 0; i < boyut1 + boyut2; i++)
    {
        printf("%d. Eleman: %d\n", i + 1, dizi3[i]);
    }

    printf("\n");

    return 0;
}