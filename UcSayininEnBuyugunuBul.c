#include <stdio.h>
int main() {
   int a, b, c; // Sayilari tutacak degiskenler
   printf("Lutfen farkli 3 sayi giriniz:\n");
   scanf("%d %d %d", &a, &b, &c); // Kullanicidan verileri al
   
   // a hem b'den hem de c'den buyukse
   if((a > b) && (a > c))
   {
       printf("%d sayisi en buyuk sayidir.\n", a);
   }
   // b hem a'dan hem de c'den buyukse
   else if((b > a) && (b > c))
   {
       printf("%d sayisi en buyuk sayidir.\n", b);
   }
   // Yukaridakiler degilse, en buyuk c'dir
   else
   {
       printf("%d sayisi en buyuk sayidir.\n", c);
   }
 
   return 0; // Programi bitir
}