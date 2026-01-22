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

📅 *Bu repo ilerleyen günlerde diğer ödevlerle güncellenecektir.*
