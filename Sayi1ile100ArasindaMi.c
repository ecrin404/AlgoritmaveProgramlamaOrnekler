#include <stdio.h>
int main() {
   int sayi;
   printf("Bir sayi giriniz:\n");
   
   // Kullanicidan tam sayi girisi aliyoruz
   scanf("%d", &sayi);
   
   // && (VE) operatoru: Her iki kosul da dogruysa calisir.
   // sayi 1'den buyuk VEYA esit VE 100'den kucuk VEYA esit mi?
   if ((sayi >= 1) && (sayi <= 100))
   {
       printf("%d sayisi 1 ile 100 arasindadir.\n", sayi);
   }
   else
   {
       printf("%d sayisi 1 ile 100 arasinda degildir.\n", sayi);
   }
 
   return 0;
}