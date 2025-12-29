#include <stdio.h>
int main() {
    int i;
    
    // 1'den 50'ye kadar dongu baslatiliyor
    for(i = 1; i <= 50; i++) {
        
        // 7'nin kati kontrolu (i, 7'ye tam bolunuyor mu?)
        if(i % 7 == 0) {
            // Sarti saglarsa donguden tamamen cik
            break;
        }
        
        // Sayiyi ekrana yazdir
        printf("%d\n", i);
    }
 
    return 0;
}