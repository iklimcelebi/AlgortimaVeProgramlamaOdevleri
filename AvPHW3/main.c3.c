/**
 * Ödev 3
 * a) Sayýsal kök
 * b) Basamak sayýsý
 * c) n. basamak
 * d) Tek basamak çarpým
 * 
 * Sayýsal Kök: Sayýnýn basamak deðerleri toplanýr ve yeni bir sayý üretilir.
 * Üretilen bu sayý tek basamaklý olana kadar iþlem devam ettirilir ve tek
 * basamaklý bu sayý sayýsal kökü verir. Örnek çalýþma aþaðýda verilmiþtir:
 * 
 * sayi = 123456
 * dönüþ deðeri: 3
 * açýklama: 
 * 1+2+3+4+5+6=21
 * 2+1=3
 *
 * Basamak Sayýsý: Parametre olarak verilen sayýnýn kaç basamaklý olduðunu
 * döndürür. Örnek çalýþma aþaðýda verilmiþtir:
 * 
 * sayi = 123456
 * dönüþ deðeri: 6
 * 
 * N. Basamak: Parametre olarak verilen sayýnýn n. basamaðýnýn deðerini
 * döndürür. 1. basamak birler basamaðýný, 2. basamak onlar basamaðýný,
 * 3. basamak yüzler basamaðýný gösterecek þekilde ilerler.
 * Örnek çalýþma aþaðýda verilmiþtir:
 * 
 * sayi=123456
 * n=2
 * dönüþ deðeri: 5
 * 
 * Tek Basamak Çarpým: Parametre olarak verilen bir sayýnýn basamak deðerleri
 * içinde tek olanlarýn çarpýlmasý ile elde edilen deðerdir. Eðer verilen sayý
 * içinde tek basamak deðeri yoksa 1 dönmelidir. Örnek çalýþma aþaðýda 
 * verilmiþtir:
 * 
 * sayi=123456
 * dönüþ deðeri: 15
 * açýklama: 1*3*5=15
 * 
 * sayi=1763528736
 * dönüþ deðeri: 1575
 * açýklama: 1*7*3*5*5*3=1575
 */
#include<stdio.h>

int sayisal_kok(int sayi);
int basamak_sayisi(int n);
int ninci_basamak(int sayi, int n);
unsigned long long int tek_basamak_carpim(int n);

int sayisal_kok(int sayi) {
	
    while(sayi > 9){
    	int toplam = 0;
    	while (sayi > 0){
    		toplam += sayi % 10;
    		sayi /= 10;
		}
		sayi = toplam;
	}
    return sayi;
}

int basamak_sayisi(int n) {
	
	int basamak = 0;
	while(n > 0){
		basamak++
		n /= 10;
	}
    return basamak;
}

int ninci_basamak(int sayi, int n) {
	
	int i;
	for (i = 1; i < n; i++){
		sayi /= 10;
	}
    return sayi % 10;
}

unsigned long long int tek_basamak_carpim(int n) {
	
	unsigned long long int carpim = 1;
	while (n > 0){
		int basamak = n % 10;
		if (basamak % 2 != 0){
			carpim *= basamak;
		}
		n /= 10;
	}
    return carpim;
}

/**
 * main fonksiyonunu deðiþtirmeyiniz.
*/
int main()
{
    char gorev;
    scanf("%c", &gorev);
    int sayi;
    int basamak;
    switch (gorev)
    {
    case 'a': // sayýsal kök
        scanf("%d", &sayi); // sayýyý al
        printf("%d\n", sayisal_kok(sayi));
        break;
    case 'b': // basamak sayýsý
        scanf("%d", &sayi); // sayýyý al
        printf("%d\n", basamak_sayisi(sayi));
        break;
    case 'c': // n. basamak
        scanf("%d", &sayi); // sayýyý al
        scanf("%d", &basamak); // basamak deðerini al
        printf("%d\n", ninci_basamak(sayi, basamak));
        break;
    case 'd': // tek basamak çarpým
        scanf("%d", &sayi); // sayýyý al
        printf("%llu\n", tek_basamak_carpim(sayi));
        break;    
    default:
        break;
    }
    return 0;
}
