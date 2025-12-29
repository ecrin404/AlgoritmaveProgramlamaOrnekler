#include <stdio.h>

// Bilet tipine gore temel fiyati belirler
float biletFiyatiHesapla(int tip)
{
    if (tip == 1) return 50.0f; // Ogrenci
    else if (tip == 2) return 80.0f; // Tam
    return 0.0f;
}

// Belirli gunlerde %20 indirim uygular 
float gunIndirimiUygula(float fiyat, int gun)
{
    if (gun == 1 || gun == 3 || gun == 5)
    {
        return fiyat * 0.80f; // %20 indirim
    }
    return fiyat;
}

// Adet 5 ve uzeri ise bilet basina 10 TL ekler
float adetArtisiUygula(float fiyat, int adet)
{
    if (adet >= 5)
    {
        return fiyat + 10.0f;
    }
    return fiyat;
}

int main()
{
    int biletTipi, gun, adet;
    float tekBiletFiyati, nihaiFiyat;

    // Kullanicidan veri alma 
    printf("Bilet tipini girin (1: Ogrenci, 2: Tam): ");
    scanf("%d", &biletTipi);

    printf("Gun (1:Pazartesi, ..., 7:Pazar): ");
    scanf("%d", &gun);

    printf("Bilet adedi: ");
    scanf("%d", &adet);

    // Gecerlilik kontrolleri
    if (biletTipi != 1 && biletTipi != 2)
    {
        printf("Gecersiz bilet tipi.\n");
        return 1;
    }
    if (gun < 1 || gun > 7 || adet <= 0)
    {
        printf("Gecersiz giris.\n");
        return 1;
    }

    // Fonksiyonlari sirayla cagirma
    tekBiletFiyati = biletFiyatiHesapla(biletTipi);
    tekBiletFiyati = gunIndirimiUygula(tekBiletFiyati, gun);
    tekBiletFiyati = adetArtisiUygula(tekBiletFiyati, adet);

    nihaiFiyat = tekBiletFiyati * adet;

    printf("Toplam Ucret: %.2f TL\n", nihaiFiyat);

    return 0;
}