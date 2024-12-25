#include <iostream>

using namespace std;

int poramnet(int number) {
    if (number == 0) { // стоп условот
        return 0;
    }

    int last_digit = number % 10;
    int remaining = poramnet(number / 10);

    if (last_digit == 9) {
        return remaining * 10 + 7;
    } else {
        return remaining * 10 + last_digit;
    }
}

void sort(int array[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (array[i] > array[j]) {
                swap(array[i], array[j]);
            }
        }
    }
}

int main() {
    int broj;
    int poramneti_broevi[100];
    int i = 0;
    while (cin >> broj) {
        poramneti_broevi[i++] = poramnet(broj);
    }

    sort(poramneti_broevi, i);

//    if (i > 5) {
//        i = 5;
//    }
    for (int j = 0; j < (i <= 5 ? i : 5); j++) {
        cout << poramneti_broevi[j] << " ";
    }
    return 0;
}
