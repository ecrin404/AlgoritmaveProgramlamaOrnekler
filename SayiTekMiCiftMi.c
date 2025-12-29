#include <stdio.h>
int main() {
   int sayi;
   printf("Bir sayi giriniz:\n");
   scanf("%d", &sayi);
   
   // sayi'nin 2'ye bolumunden kalan 0 ise cifttir
   if(sayi % 2 == 0)
   {
       printf("%d sayisi cift sayidir.", sayi);
   }
   else // Kalan 0 degilse (1 ise) tektir
   {
       printf("%d sayisi tek sayidir.", sayi);
   }
   return 0;
}