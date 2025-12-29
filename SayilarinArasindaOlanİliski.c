#include <stdio.h>
int main() {
   int a, b;
   printf("a sayisini giriniz :\n");
   scanf("%d", &a);
   
   printf("b sayisini giriniz :\n");
   scanf("%d", &b);
   
   if(a > b) // Ilk durum: a'nin b'den buyuk olmasi
   {
       printf("sonuc : a > b");
   }
   else if(a < b) // Ikinci durum: a'nin b'den kucuk olmasi
   {
       printf("sonuc : a < b");
   }
   else // Yukaridakiler degilse tek secenek kalir: Esitlik
   {
       printf("sonuc : a = b");
   }
   
   return 0;
}