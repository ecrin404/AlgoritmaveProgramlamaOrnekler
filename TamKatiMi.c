#include <stdio.h>
int main() {
   int a, b;
   printf("Iki sayi giriniz :\n");
   scanf("%d%d", &a, &b);
   
   // a'nin b'ye bolumunden kalan 0 ise a, b'nin tam katidir
   if(a % b == 0)
   {
       printf("%d sayisi %d sayisinin tam katidir.", a, b);
   }
   else // Kalan 0 degilse tam kati degildir
   {
       printf("%d sayisi %d sayisinin tam kati degildir.", a, b);
   }
   return 0;
}