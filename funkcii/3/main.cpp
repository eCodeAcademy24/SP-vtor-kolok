#include <iostream>

//Input
// 1 10
//Output
// 1
// 2
// 3
// 4
// 5
// 6
// 9

using namespace std;

int obratenBroj(int broj) {
    int obraten_broj = 0;

    while (broj) {
        int posledna_cifra = broj % 10;
        obraten_broj = obraten_broj * 10 + posledna_cifra;
        broj /= 10;
    }

    return obraten_broj;
}

int sumaNaCifri(int broj) {
    int suma_na_cifri = 0;

    while (broj) {
        int posledna_cifra = broj % 10;
        suma_na_cifri += posledna_cifra;
        broj /= 10;
    }

    return suma_na_cifri;
}

void pecatiVoInterval(int a, int b) {
    for (int i = a; i <= b; i++) {
        int zbir = i + obratenBroj(i);
        int suma_na_cifri = sumaNaCifri(zbir);

        if (zbir % suma_na_cifri == 0) {
            cout << i << endl;
        }
    }
}


int main() {
    int a, b;
    cin >> a >> b;

    pecatiVoInterval(a, b);
    return 0;
}
