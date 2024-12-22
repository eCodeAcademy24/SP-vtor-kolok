#include <iostream>

using namespace std;

void funkcija(int n, int *pokazuvac_max, int *pokazuvac_min) {
    for (int i = 0; i < n; i++) {
        int broj;
        cin >> broj;

        if (i == 0) {
            *pokazuvac_max = broj;
            *pokazuvac_min = broj;
            continue;
        }

        if (broj > *pokazuvac_max) {
            *pokazuvac_max = broj;
        }

        if (broj < *pokazuvac_min) {
            *pokazuvac_min = broj;
        }
    }

    cout << "Najgolema razlika: " << *pokazuvac_max - *pokazuvac_min;
}

int main() {
    int n;
    cin >> n;

    int max = 0, min = 0;
    funkcija(n, &max, &min);

    return 0;
}
