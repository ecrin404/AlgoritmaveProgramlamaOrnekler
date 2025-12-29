#include <stdio.h>
int main() {
   int x, y, z;
   printf("x sayisini giriniz :\n");
   scanf("%d", &x);
   
   if(x < 0) // x negatifse bu formuller calisir.
   {
       y = (x * x) + (2 * x);
       z = 3 * x;
   }
   else // x sifir veya pozitifse bu formuller calisir.
   {
       y = x;
       z = x * x;
   }
   
   printf("hesaplanan y degeri : %d\n", y);
   printf("hesaplanan z degeri : %d\n", z);
   return 0;
}