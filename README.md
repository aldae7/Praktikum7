# Praktikum7


# Program Fibbonacci dengan cara iteratif

**Alur Program**

1. Mendefinisikan fungsi iteratif yaitu suku, a, b, c, sebagai integer.
2. Mendeklarasikan integer nilai a = 0, dan integer b = 0
3. membangdingkan fungsi suku sama dengan 1 dan 0.
4. Perulangan fibbonacci di awali dengan indeks 2, dan diakhiri dengan indeks suku.
5. suku ketiga sama dengan suku ke satu ditambah suku ke 2, suku ke satu sama dengan suku kedua,
   suku kedua sama dengan suku ketiga.
6. Nilai balik fungsi ```return c;```.
7. fungsi utama mengembalikan program secara default.
8. deklarasikan suku,a,b,c.
9. menginput data suku oleh user.
10. pemanggilan fungsi iteratif dan memeberitahukan kepada sistem operasi bahwa program telah berakhir.
11.selesai

# Code Program

```c++

#include <iostream>

using namespace std;

int iteratif(int suku, int a, int b, int c){
    a = 1, b = 0;

    if (suku == 1) return b;
    if (suku == 0) return a;

    else {
        for (int i=2; i<=suku; i++){
            c = a + b;
            a = b;
            b = c;
        }
        return c;
    }
}

int main(){
    int suku, a, b,c;

    cout << "PROGRAM FIBBONACCI MENGGUNAKAN FUNGSI ITERATIF" << endl;
    cout << "Masukkan niali ke- : "; cin >> suku;
    cout << "\nBilangan fibonaccinya untuk " << suku << "adalah";
    cout << iteratif(suku, a, b, c);
    return 0;
}
 

```

# Hasil Program

![img](https://raw.githubusercontent.com/aldae7/Praktikum7/master/iteratif.png)

# Program ke-2 Fungsi Rekursif Perkalian  2 bilangan bulat dengan cara penjumlahan

**Alur Program**

1. Mendefinisikan Fungsi kali yaitu ```int m, int n``` sebagai integer.
2. Mendeklarasikan ```int i, hasil = 0;``` sebagia integer.
3. perulangan di awali dengan 1 dan di dengan (n) dan fungsi hasil ditmbah sama dengan.
4. jika n kurang dari 0 maka kurang hasil dan kalau salah maka nilai nya hasil.
5. sekarang mendefiniskan utama yaitu a dan b.
6. terakhir pemanggilan funsi rekursif yaitu ```kali(a,b)``` 
7. dan pengembalian nilai selese dechh 

# Code Program

```c++

#include <iostream>
#include <math.h>
#include <conio.h>

using namespace std;

int kali (int m, int n){
    int i, hasil =0;
    for (i=1;i<=(n);i++)
        hasil +=m;
    if (n < 0) {
            return(-hasil);
    }
    else {
        return (hasil);
    }
}

int main()
{
    int a, b;

    cout <<  "Masukkan bilangan : "; cin >> a;
    cout <<  "Masukkan Bilangan : "; cin >> b;
    cout << "\n\nHasil dari " << a << " x " << b << " = " << kali(a,b);
    return 0;
}

```

# Hasil Program

![img](https://raw.githubusercontent.com/aldae7/Praktikum7/master/rekursif.png)

# SELESAI JUGA TUGASNYA ALHAMDULLILLAH