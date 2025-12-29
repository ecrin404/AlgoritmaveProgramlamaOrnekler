#include <stdio.h>
int main() {
    // i: dongu sayaci, x: sonuc (carpim degeri), sayi: kullanici girisi
    int i, x = 1, sayi; 

    printf("Faktoriyeli hesaplanacak sayi: ");
    scanf("%d", &sayi); // Kullanicidan tam sayi aliniyor

    // Faktoriyel hesabi icin dongu baslatiliyor
    for (i = 1; i <= sayi; i++) {
        x *= i; // x = x * i ifadesinin kisa yazimidir
    }

    // Sonuc ekrana yazdiriliyor
    printf("%d! = %d\n", sayi, x);

    return 0; // Program basariyla tamamlandi
}