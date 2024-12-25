#include <iostream>
using namespace std;

void premesti(int *arr, int n) {
    int tmp[100];
    int counter = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] >= 0) {
            tmp[counter++] = arr[i];
        }
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            tmp[counter++] = arr[i];
        }
    }

    for (int i = 0; i < n; i++) {
        arr[i] = tmp[i];
    }
}

int main() {
    int n;
    cin >> n;
    int array[100];

    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    premesti(array, n);

    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }

    return 0;
}