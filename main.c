#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


int main()
{
    setlocale(LC_ALL,"Turkish");


    //STRLEN FONKSIYONU (Dizinin uzunlugunu verir.)
    char isim[] = "Kaan Academy";
    printf("%d",strlen(isim));
    printf("\n");

    //STRCPY FONKSIYONU (Ilgili diziyi hedef diziye yazar.)
    char mekan[20] = "Eyfel Kulesi";
    char ulke[20];
    strcpy(ulke,mekan);
    printf("%s",ulke);
    printf("\n");

    //STRNCPY FONKSIYONU (Ilgili diziyi hedef dizinin belirtilen karakterine kadar uzerine yazar.)
    char mekan3[20] = "Eyfel Kulesi";
    char ulke3[6] = {};
    strncpy(ulke3,mekan3,5);
    printf("%s",ulke3);
    printf("\n");

    //STRCAT FONKSIYONU (Ilgili diziyi hedef dizinin devamina ekler...)
    char mekan[20] = "Eyfel";
    char ulke[20]= " Kulesi";
    char birlesmis[20] = {};
    strcat(birlesmis,mekan);
    strcat(birlesmis,ulke);
    printf("%s",birlesmis);
    printf("\n");

    //STRCMP FONKSIYONU (Iki diziyi alfabetik olarak birbiriyle karsilastirir.. {-1,0,1} degerlerini doner...)
    char meyve1[20] = "Kiraz";
    char meyve2[20] = "Muz";
    printf("%d",strcmp(meyve1,meyve2));
    printf("\n");

    //STRREV FONKSIYONU (Ilgili diziyi tersine cevirir...)
    char reverse[20] = "Tersine Cevir";
    printf("%s",strrev(reverse));
    printf("\n");

    //STRLWR ve STRUPR FONKSIYONU (Ilgili diziyi buyuk ya da kucuk harflere cevirir...)
    char kucult[20] = "BuYuK Ve KuCuK";
    printf("%s",strlwr(kucult));
    printf("\n");

    char buyut[20] = "BuYuK Ve KuCuK";
    printf("%s",strupr(buyut));
    printf("\n");


    return 0;
}
