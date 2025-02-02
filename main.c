#include <stdlib.h>
#include <stdio.h>

int main()
{
    int sayi;
    FILE *dosya;
    
    dosya = fopen("veri.txt", "r");
    
    if (dosya == NULL)
    {
        printf("Dosya açılamadı!\n");
        return 1;
    }

    // Dosyadan bir sayı oku
    fscanf(dosya, "%d", &sayi);

    // Dosyayı kapat
    fclose(dosya);
    
    // Koşullar ve çıktılar
    if (sayi % 2 == 0)
    {
        printf("Dosyadan okunan sayı: %d\nGirdiğiniz sayı çifttir.\n", sayi);
    }
    else
    {
        printf("Dosyadan okunan sayı: %d\nGirdiğiniz sayı tektir.\n", sayi);
    }

    return 0;
}
