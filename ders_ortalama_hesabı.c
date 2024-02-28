// Kullanıcıdan vize ve final notu alıp ortalamasını hesaplıyoruz. Dersten geçti mi kaldı mı belirliyoruz

# include <stdio.h>

int main(){
    // değişken dekarasyonları
    float vize , final, toplam=0;
    float vize_yuzde , final_yuzde;
    float gecme_notu = 50;
    float vize_sonuc , final_sonuc;


    //kullanıcıdan değişkenleri al
    printf("Sirasiyla vize ve final notunuzu giriniz : ");
    scanf("%f%f", &vize, &final);

    printf("Sirasiyla vize ve final etki yuzdelerini giriniz : ");
    scanf("%f%f", &vize_yuzde, &final_yuzde);

    // hesaplamaları yap
    vize_sonuc = (float)(vize * vize_yuzde) / 100 ;
    final_sonuc = (float)(final * final_yuzde) / 100;
    toplam = vize_sonuc + final_sonuc;

    // if else ile kaldı mı geçti mi belirle
    if (toplam >= gecme_notu){
        printf("Tebrikler dersi %.2f notuyla gectiniz.", toplam);

    }   
    else{
        printf("Ders ortalamanis %.2f. Notunuz 50'nin altinda oldugu icin dersten kaldiniz.", toplam);
    } 

    return 0 ;

}