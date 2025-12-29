#include <stdio.h>
int main() {
    // i degiskeni dongu icin tanimlaniyor
    int i; 

    // 1'den 100'e kadar dongu basliyor
    for(i = 1; i <= 100; i++) {
        
        // Oncelikle hem 3 hem 5'e (yani 15'e) bolunme kontrolu
        if(i % 15 == 0) {
            printf("FizzBuzz\n");
        }
        // Sadece 5'e bolunme kontrolu
        else if(i % 5 == 0) {
            printf("Buzz\n");
        }
        // Sadece 3'e bolunme kontrolu
        else if(i % 3 == 0) {
            printf("Fizz\n");
        }
        // Hicbirine bolunmezse sayinin kendisi
        else {
            printf("%d\n", i);
        }
    }

    return 0;
}