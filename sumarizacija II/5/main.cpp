#include <iostream>
using namespace std;

int par(int *array, int n) {
    int min = 0;
    int flag = true;

    for (int i = 0; i < n; i++) {
        int counter = 0;
        for (int j = 0; j < n; j++) {
            if (array[j] == array[i]) {
                ++counter;
            }
        }

        if (counter % 2 == 0) {
            if (flag) {
                min = array[i];
                flag = false;
                continue;
            }

            if (array[i] < min) {
                min = array[i];
            }
        }
    }

    if (flag) {
        return 0;
    } else {
        return min;
    }
}

int main() {
    int n;
    cin >> n;

    int array[100];
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    int number = par(array, n);

    if (number) {
        cout << "Najmaliot element koj se pojavuva paren broj pati e " << number;
    } else {
        cout << "Nitu eden element ne se pojavuva paren broj pati!";
    }
    return 0;
}