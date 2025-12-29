#include <stdio.h>
int main() {
   int sayi;
   printf("Bir sayi giriniz:\n");
   scanf("%d", &sayi);
   
   if(sayi > 0) // Sayi 0'dan buyukse pozitif
   {
       printf("%d sayisi pozitif sayidir.", sayi);
   }
   else if(sayi < 0) // Sayi 0'dan kucukse negatif
   {
       printf("%d sayisi negatif sayidir.", sayi);
   }
   else // Sayi ne buyuk ne kucukse, 0'dir
   {
       printf("Girilen sayi sifirdir.");
   }
   return 0;
}