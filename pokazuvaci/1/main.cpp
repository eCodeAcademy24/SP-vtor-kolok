#include <iostream>

using namespace std;

void zbirNaCifri(int broj, int *pokazuvac_cifri) {
    while (broj) {
        int posledna_cifra = broj % 10;
        if (posledna_cifra % 2 == 0 && posledna_cifra % 3 != 0) {
            *pokazuvac_cifri += posledna_cifra;
        }

        broj /= 10;
    }
}

void funkcija(int a, int b, int *pokazuvac_vkupno) {
    for (int i = a; i <= b; i++) {
        int zbir_na_cifri = 0;
        zbirNaCifri(i, &zbir_na_cifri);

        if (zbir_na_cifri > 0 && zbir_na_cifri % 7 == 0) {
            cout << i << endl;
            *pokazuvac_vkupno += 1;
        }
    }
}

int main() {
    int a, b;
    cin >> a >> b;

    int vkupno = 0;
    funkcija(a, b, &vkupno);

    cout << "Vkupno: " << vkupno;
    return 0;
}
