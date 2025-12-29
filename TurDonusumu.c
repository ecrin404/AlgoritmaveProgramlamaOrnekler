#include <stdio.h>
int main() {
   float x = 3.145678; // Ondalikli bir sayi tanimliyoruz
   int y;
   
   // float degerini tam sayiya donusturuyoruz (virgulden sonrasi atilir)
   y = (int)x; 
   
   // Sonucu ekrana yazdiriyoruz (Sonuc: 3)
   printf("Tam sayi hali: %d\n", y);
   
   return 0;
}