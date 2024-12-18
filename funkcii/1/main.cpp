#include <iostream>

using namespace std;

void pecatenje(int niza[], int broj_na_elementi) {
    for (int i = 0; i < broj_na_elementi; i++) {
        cout << niza[i] << " ";
    }

    cout << endl;
}

void prevrtuvaj_niza(int array[], int n) {
    for (int i = 0; i < n / 2; i++) {
        int tmp = array[i];
        array[i] = array[n - 1 - i];
        array[n - 1 - i] = tmp;
    }
}

int main() {
    int n;
    cin >> n;

    int array[100];

    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    pecatenje(array, n);

    prevrtuvaj_niza(array, n);

    pecatenje(array, n);

    for (int i = 1; i < n; i++) {
        array[i] = array[i * 2];
        --n;
    }

    pecatenje(array, n);

    prevrtuvaj_niza(array, n);

    pecatenje(array, n);
    return 0;
}
