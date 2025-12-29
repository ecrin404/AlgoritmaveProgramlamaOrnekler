#include <stdio.h>
int main() {
   int gun; // Haftanin gununu tutacak degisken
   printf("1-7 arasinda bir deger giriniz:\n");
   scanf("%d", &gun);
   
   // Degiskenin degerine gore dallanma yapar
   switch(gun)
   {
       case 1: 
       printf("Pazartesi\n");
       break; // switch yapisindan cikilmasini saglar
       
       case 2:
       printf("Sali\n");
       break;
       
       case 3:
       printf("Carsamba\n");
       break;
       
       case 4:
       printf("Persembe\n");
       break;
       
       case 5:
       printf("Cuma\n");
       break;
       
       case 6:
       printf("Cumartesi\n");
       break;
       
       case 7:
       printf("Pazar\n");
       break;
       
       // Girilen deger hicbir case'e uymuyorsa calisir
       default:
       printf("Gecersiz deger! Iyi gunler...\n");
   }
   
   return 0;
}