// kullanıcıdan bir sayı alıp sayının tersini ekrana yazdırıcaz

#include <stdio.h>
#include <string.h>

int main(){
    // değişken deklarasyonu
    int girilen_sayi , sayinin_kopyasi, index=0;
    int basamak_sayisi = 0;

    // kullanıcıdan sayı değeri alıp atama yapıyoruz
    printf("Lutfen bir sayi giriniz : ");
    scanf("%d", &girilen_sayi);

    // sayinin_kopyasina girilen sayıyı atıyoruz
    sayinin_kopyasi = girilen_sayi;

    // girilen sayının basamak sayısını belirliyoruz
    do{
        girilen_sayi /= 10;
        basamak_sayisi ++;

    }while(girilen_sayi != 0);

    // for döngüsü ile sayının tersini yazdırıyoruz
    for (index=0; index<basamak_sayisi; index++){
        printf("%d", sayinin_kopyasi%10);
        sayinin_kopyasi /= 10; // float diye belirtmedik integer bölme yapılacak
    }

    return 0 ;
}