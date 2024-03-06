// Kullanıcıdan kartla ödeme alıyoruz online
#include <stdio.h>
#include <windows.h>// sleep() fonksiyonu için ( windows için geçerli)
// Lunix işletim sistemi için #include <unistd.h> header ve sleep() fonksiyonu kullanılır.
int main(){
    // değişkenler
    float toplam_tutar = 8500, odenecek_tutar ;
    int secilen_secenek , taksit_secenek[3] = {2, 3 , 4};

    // kullanıcıya taksit bilgisi soruluyor
    char menu[] = {"1. 2 taksit\n"
                   "2. 3 taksit\n"
                   "3. 4 taksit\n"
                   "4.Taksit istemiyorum\n"};

    printf("Toplam odeme tutari = %f\n", toplam_tutar);
    printf("Kredi taksitli odeme secerseniz %%2 ektra alinacaktir.");
    printf("Menuden istediginiz secenegi kodlayiniz :\n%s", menu);
    scanf("%d", &secilen_secenek);


    if(secilen_secenek == 4){
        printf("Odenecek tutar %.2f\n", toplam_tutar);
        printf("Lutfen kartinizi okutunuz.\n");
        Sleep(5000); // 5000 milisaniye = 5 saniye
        printf("Islem yapiliyor lutfen bekleyiniz.\n");
        Sleep(5000); // 5 saniye
        printf("Odeme islemi basariyla gerceklesti.\n"
                       "Iyi gunler dileriz.");
    
  
    
    }
    else {
        float ek_odeme = (float) toplam_tutar * 2 / 100;

        toplam_tutar += ek_odeme;

        odenecek_tutar = toplam_tutar / menu[secilen_secenek-1];

        printf("Odenecek tutar %.2f\n", odenecek_tutar);
        printf("Lutfen kartinizi okutunuz.\n");
        Sleep(5000); 
        printf("Islem yapiliyor.\n");
        Sleep(5000);
        printf("Odemeniz basariyla gerceklesti\n"
                       "Kalan borc tutari %.2f\n", toplam_tutar - odenecek_tutar);
        printf("Iyi gunler dileriz.");
        

    }

    return 0;



}