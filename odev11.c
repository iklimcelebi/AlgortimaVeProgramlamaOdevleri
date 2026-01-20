#include <stdio.h>

int main() {
    int n;
    int berabere = 0, oyuncu1_kazanma = 0, oyuncu2_kazanma = 0;
    char oyuncu1, oyuncu2;
    int i; // for için i 

    printf("Oynanacak oyun sayisini giriniz: ");
    scanf("%d", &n); 

    for (i = 0; i < n; i++) {
        scanf(" %c", &oyuncu1); 
        scanf(" %c", &oyuncu2);

        if (oyuncu1 == oyuncu2) {
            berabere++;
        } else if ((oyuncu1 == 't' && oyuncu2 == 'm') || 
                   (oyuncu1 == 'k' && oyuncu2 == 't') || 
                   (oyuncu1 == 'm' && oyuncu2 == 'k')) {
            oyuncu1_kazanma++;
        } else {
            oyuncu2_kazanma++;
        }
    }

    printf("%d\n", berabere);
    printf("%d\n", oyuncu1_kazanma);
    printf("%d\n", oyuncu2_kazanma);

    return 0;
    
}

