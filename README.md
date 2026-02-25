# Algoritma ve Programlama Ödevleri

Bu repository, **Algoritma ve Programlama (C dili)** dersi kapsamında yaptığım ödevleri içermektedir.
---
AvPHW1 – Ödev 1
Bu program, *Taş–Kağıt–Makas* oyununu **n tur** boyunca oynatarak:
  * Beraberlik sayısını
  * 1. oyuncunun kazandığı oyun sayısını
  * 2. oyuncunun kazandığı oyun sayısını
hesaplar ve ekrana yazdırır.
---
Programın Çalışma Mantığı
  1. Kullanıcıdan oynanacak oyun sayısı alınır.
  2. Her tur için iki oyuncunun hamlesi (`t`, `k`, `m`) girilir.
  3. Kurallara göre sonuç belirlenir:
     * Aynı hamle → **Berabere**
     * `t` > `m`, `m` > `k`, `k` > `t`
  4. Tüm turlar sonunda sonuçlar ekrana yazdırılır.
---
Derleme ve Çalıştırma

```bash
gcc odev11.c -o odev1
./odev1
```
---
Notlar
  * Girişler küçük harf (`t`, `k`, `m`) olarak alınmalıdır.
  * Derlenmiş dosyalar (`.exe`, `.o`) repo’ya eklenmemiştir.
---

AvPHW2 – Ödev 2

Kullanıcıdan alınan bir üst sınır (n) değerine kadar olan tüm dik üçgen kombinasyonları (Pisagor üçlüleri) bulan bir C programı.
---
Programın Amacı
1 ile n arasındaki tam sayıları kullanarak a^2 + b^2 = c^2 koşulunu sağlayan

Tüm dik üçgen kenar uzunluklarını bulmak ve ekrana yazdırmak
---
Programın Çalışma Mantığı
  *Kullanıcıdan bir n değeri alınır
  *Üç iç içe döngü ile a < b < c ≤ n olacak şekilde tüm kombinasyonlar denenir
  *Pisagor koşulunu sağlayan üçlüler ekrana yazdırılır
  *Bulunan toplam dik üçgen sayısı en sonda gösterilir
---
Örnek Çıktı
**Bulunan dik ucgen: 3-4-5
**Bulunan dik ucgen: 6-8-10
**Bulunan ucgen sayisi: 2
---
AvPHW3 – Ödev 3

Bu program, kullanıcıdan alınan sayılar üzerinde dört farklı işlem yapar:
  1.	Sayısal kök
  2.	Basamak sayısı
  3.	N. basamak
  4.	Tek basamak çarpım
________________________________________
Programın Amacı:
  *Sayısal Kök (a): Verilen sayının basamak değerleri toplanarak tek basamaklı bir sayı elde edilir.
  *Basamak Sayısı (b): Verilen sayının kaç basamaklı olduğunu bulur.
  *N. Basamak (c): Verilen sayının n. basamağını döndürür. (1 → birler, 2 → onlar, 3 → yüzler)
  *Tek Basamak Çarpım (d): Sayının basamak değerleri içinde tek olanların çarpımını döndürür. Eğer tek basamak yoksa 1 döner.
________________________________________
Programın Çalışma Mantığı
  1.	Kullanıcı bir görev seçer (a, b, c, d).
  2.	İlgili görev için kullanıcıdan gerekli sayı veya sayılar alınır.
  3.	Program seçilen işleme göre sonucu ekrana yazdırır.
________________________________________
Notlar
•	Görev seçimleri küçük harf ile (a, b, c, d) yapılmalıdır.
•	Derlenmiş dosyalar (.exe, .o) repo’ya eklenmemiştir.
-----------------
AvPHW4 – Ödev 4
Bu program, kullanıcıdan 1–25 aralığında sayılar alır ve en az tekrar eden sayıyı ekrana yazdırır.
Programın Amacı:
  *Kullanıcının girdiği sayılar arasında hangi sayının en az tekrar ettiğini bulmak.
  *Bu sayede istatistiksel olarak nadiren girilen sayıyı tespit etmek.
------
Programın Çalışma Mantığı:
  *Kullanıcıdan kaç adet sayı gireceği (n) alınır.
  *Kullanıcıdan n adet sayı alınır (1–25 aralığında olmalıdır).
  *Her sayının frekansı bir dizi (frekans[25]) ile takip edilir.
  *En az tekrar eden sayı bulunur: Sıfırdan büyük ve en küçük frekansa sahip sayı seçilir.
  Sonuç ekrana yazdırılır.
Notlar:
  *Kullanıcı 1–25 dışındaki sayılar girerse program “Geçersiz sayı girildi!” mesajı verir.
