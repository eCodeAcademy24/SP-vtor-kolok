#include <iostream>

using namespace std;

int count_positives(int *arr, int size) {
    if (size == 0) {
        return 0;
    }
    if (arr[0] > 0) {
        return 1 + count_positives(arr + 1, size - 1);
    }
    return count_positives(arr + 1, size - 1);
}

int main() {
    int array[100], n;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    cout << count_positives(array, n);

    return 0;
}