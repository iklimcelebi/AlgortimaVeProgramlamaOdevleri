#include <stdio.h>

int main() {
    int n, sayi, i, min = 25, endusukfrekans;
    int frekans[25] = {0}; // Tüm frekanslarý 0 ile baþlat

    printf("Girilecek sayi adetini girin: ");
    scanf("%d", &n);// girilecek sayi adedini alýyoruz

    printf("Sayilari girin (1-25 araliginda):\n");//sayilari al
    for (i = 0; i < n; i++) {
        scanf("%d", &sayi);
        if (sayi >= 1 && sayi <= 25) {// sayi 1-25 arasinda ise
            frekans[sayi - 1]++; // Frekansý artýr
        } else {// degilse
            printf("Gecersiz sayi girildi!\n");
        }
    }

    // En düþük frekansý ve sayýyý bul
    for (i = 0; i < 25; i++) {
        if (frekans[i] > 0 && frekans[i] < min) {
            min = frekans[i];
            endusukfrekans = i + 1;
        }
    }

    printf("En az tekrar eden sayi: %d\n", endusukfrekans);

    return 0;
}
