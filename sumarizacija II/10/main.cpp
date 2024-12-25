#include <iostream>
#include <cstdlib>

using namespace std;

void transform(int *array, int n) {
    int shifter = array[0];
    if (shifter < 0) { // shift left
        for (int i = 0; i < abs(shifter); i++) {
            for (int j = 0; j < n; j++) {
                array[j] = array[j + 1];
            }

            array[n - 1] = 0;
        }
    } else { // shift right
        for (int i = 0; i < abs(shifter); i++) {
            for (int j = n - 1; j > 0; j--) {
                array[j] = array[j - 1];
            }

            array[0] = 0;
        }
    }
}

void printer(int *array, int n) {
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }

    cout << endl;
}

bool zeroCounter(int *array, int n) {
    int counter = 0;
    for (int i = 0; i < n; i++) {
        if (array[i] == 0) {
            ++counter;
        }
    }

//    if (counter == n) return true;
//
//    return false;
    return counter == n;
}

int main() {
    int m;
    cin >> m;

    int n;
    int array[100];
    int zeros = 0;

    for (int i = 0; i < m; i++) {
        cin >> n;
        for (int j = 0; j < n; j++) {
            cin >> array[j];
        }

        transform(array, n);
        printer(array, n);

        if (zeroCounter(array, n)) {
            zeros++;
        }
    }

    cout << zeros;
    return 0;
}
