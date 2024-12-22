#include <iostream>

using namespace std;

//eden nachin
//void funkcija(int m, int n, int *brojac) {
//    for (int i = m; i <= n; i++) {
//        int obraten = 0, tmp = i;
//        while (tmp) {
//            obraten = obraten * 10 + tmp % 10;
//            tmp /= 10;
//        }
//        if ((i + obraten) <= 2 * i) {
//            cout << i << endl;
//            ++*brojac;
//        }
//    }
//}

void svrtiBroj(int i, int *pokazuvac_obraten) {
    while (i) {
        *pokazuvac_obraten = *pokazuvac_obraten * 10 + i % 10;
        i /= 10;
    }
}

//drug nachin
void funkcija(int m, int n, int *pokazuvac_brojac) {
    for (int i = m; i <= n; i++) {
        int obraten = 0;
        svrtiBroj(i, &obraten);

        if ((i + obraten) <= 2 * i) {
            cout << i << endl;
            ++*pokazuvac_brojac;
        }
    }
}

int main() {
    int m, n, brojac = 0;
    cin >> m >> n;
    funkcija(m, n, &brojac);
    cout << brojac;

    return 0;
}