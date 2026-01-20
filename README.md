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

📅 *Bu repo ilerleyen günlerde diğer ödevlerle güncellenecektir.*
