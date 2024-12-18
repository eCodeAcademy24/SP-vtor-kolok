#include <iostream>

//Input
// 4
// 4
// 2548123
// 9142347
// 1547810115
// 569124
//Output
// 58 : 13
// 97 : 16
// 5785 : 25
// 569 : 20

//Input
// 6
// 7
// 298910148
// 557987
// 12348506
// 9847
// 698871
// 90
// 999
//Output
// 9898 : 34
// 7987 : 31
// 8 : 8
// 987 : 24
// 9887 : 32
// 9 : 9
// 999 : 27

using namespace std;

long long prevrti_broj(long int broj) {
    long long obraten = 0;

    while (broj) {
        int posledna_cifra = broj % 10;
        obraten = obraten * 10 + posledna_cifra;
        broj /= 10;
    }

    return obraten;
}

int rekurzija(long long obraten, int k) {
    if (obraten == 0) { // stop uslov
        return 0;
    } else { // rekurziven del
        int posledna_cifra = obraten % 10;
        if (posledna_cifra > k) {
            cout << posledna_cifra;
            return posledna_cifra + rekurzija(obraten / 10, k);
        } else {
            return rekurzija(obraten / 10, k);
        }
    }
}

int main() {
    int k, n;
    cin >> k >> n;

    for (int i = 0; i < n; i++) {
        long int broj;
        cin >> broj;

        long long obraten = prevrti_broj(broj);

        int suma = rekurzija(obraten, k);
        cout << " : " << suma << endl;
    }
    return 0;
}
