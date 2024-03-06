// kullanıcıdan bir sayı alıcaz ve kaç basamaklı olduğunu bukucaz
#include <stdio.h>

int main(){
    // değişken oluşturuyoruz
    int sayi , basamak_sayisi = 0 , i ; 

    // kullanıcıdan değer alıp basamak sayısını buluyoruz
    printf("Bir sayi giriniz : ");
    scanf("%d", &sayi);

    do {
        sayi = sayi / 10;
        basamak_sayisi += 1 ;

    }while (sayi > 0);

    printf("Girdiginiz sayi %d basamaklidir." , basamak_sayisi);

    return 0;
}