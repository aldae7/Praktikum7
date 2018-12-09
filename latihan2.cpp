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
