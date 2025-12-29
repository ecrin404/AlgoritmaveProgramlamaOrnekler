#include <stdio.h>
int main(void) {
  int sayi1, sayi2; // Karsilastirilacak tam sayilari tanimladik
  
  // Kullanicidan giris aldik
  printf("Birinci sayiyi girin:");
  scanf("%d", &sayi1);
  
  printf("Ikinci sayiyi girin:");
  scanf("%d", &sayi2);

  // Karar yapisi: sayi1, sayi2'den buyuk mu?
  if (sayi1 > sayi2)
    // Kosul dogruysa (True) burasi calisir
    printf("Buyuk sayi %d", sayi1);
  else
    // Kosul yanlissa (False) burasi calisir
    printf("Buyuk sayi %d", sayi2);

  return 0; // Programi basariyla bitir
}