# Praktikum7


# Program Fibbonacci dengan cara iteratif

**Alur Program**

1. Mendefinisikan fungsi iteratif yaitu suku, a, b, c, sebagai integer.
2. Mendeklarasikan integer nilai a = 0, dan integer b = 0
3. membangdingkan fungsi suku sama dengan 1 dan 0.
4. Perulangan fibbonacci di awali dengan indeks 2, dan diakhiri dengaindeks suku.
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