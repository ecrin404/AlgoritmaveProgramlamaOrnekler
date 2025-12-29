#include <stdio.h>
int main() {
   int sayi1, sayi2; // Degiskenleri tanimliyoruz
   printf("Iki sayi giriniz:\n");
   scanf("%d%d", &sayi1 , &sayi2); // Degerleri aliyoruz
   
   // Orn: sayi1 = 10, sayi2 = 20 olsun
   sayi1 = sayi1 + sayi2; // sayi1 simdi 30 (toplam) oldu
   sayi2 = sayi1 - sayi2; // 30 - 20 = 10 -> sayi2 artik 10 (eski sayi1)
   sayi1 = sayi1 - sayi2; // 30 - 10 = 20 -> sayi1 artik 20 (eski sayi2)
   
   // Yeni degerleri ekrana yazdiriyoruz
   printf("Sayilarin yeni degerleri : \nsayi1 = %d\nsayi2 = %d\n", sayi1, sayi2);
   
   return 0;
}