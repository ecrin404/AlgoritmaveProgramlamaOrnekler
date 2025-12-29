#include <stdio.h>
int main() {
    int sayi = 10;
    int *ptr = &sayi; // Adres operatörü (&) ile adres alma
    printf("Sayi: %d\n", sayi);
    printf("Adres: %p\n", ptr); // %p ile bellek adresi yazdirma 
    printf("Deger: %d\n", *ptr); // * ile degere (dereference) ulasim 
    return 0;
}