#include <iostream>
#include <iomanip>

using namespace std;

double recursion(int *array, int n) {
    if (n == 1) { // стоп условот
        return array[0]; // *(array)
    } else {
        return array[0] + (1 / recursion(array + 1, n - 1));
    }
}

int main() {
    int n;
    cin >> n;

    int array[100];
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    cout << fixed << setprecision(6) << recursion(array, n);
    return 0;
}
