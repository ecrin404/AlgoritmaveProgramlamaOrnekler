#include <stdio.h>
int main() {
    int dizi[6] = {12, 45, 2, 67, 34, 19};
    int i, en_buyuk, en_kucuk;

    en_buyuk = en_kucuk = dizi[0]; // Baslangicta ilk elemani sectik

    for(i = 1; i < 6; i++) {
        if(dizi[i] > en_buyuk) en_buyuk = dizi[i];
        if(dizi[i] < en_kucuk) en_kucuk = dizi[i];
    }

    printf("En buyuk: %d, En kucuk: %d\n", en_buyuk, en_kucuk);
    return 0;
}