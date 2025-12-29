#include <stdio.h>
int main() {
    int i; // Dongu sayacini tanimliyoruz
    
    // i = 0'dan basla, 5'ten kucuk oldugu surece devam et, her seferinde 1 artir
    for(i = 0; i < 5; i++) 
    {
        // %d ekleyerek kacinci seferde oldugumuzu da gorebiliriz
        printf("%d. Merhaba Dunya!\n", i + 1); 
    }
    
    return 0; // Programi sonlandir
}