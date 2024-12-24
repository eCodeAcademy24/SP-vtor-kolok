#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;

int main() {
    int uplata;
    cin >> uplata;

    char shifra[10], max_shifra[10];
    int tip, max_tip;
    double koeficient, max_koeficient, total = 1.0;
    bool flag = true;

    while (cin >> shifra) {
        if (strcmp(shifra, "#") == 0) break;

        cin >> tip;
        cin >> koeficient;

        total *= koeficient;
        if (flag) { // тука ќе влезе само при првата итерација
            max_koeficient = koeficient;
            max_tip = tip;
            strcpy(max_shifra, shifra);
            flag = false;
            continue;
        }

        if (koeficient > max_koeficient) {
            max_koeficient = koeficient;
            max_tip = tip;
            strcpy(max_shifra, shifra);
        }
    }

    // az32 2 2.65
    cout << max_shifra << " " << max_tip << " " << fixed << setprecision(2) << max_koeficient << endl;

    double suma = total * uplata;
    cout << fixed << setprecision(2) << suma;
    return 0;
}