#include <iostream>
#include <iomanip>

using namespace std;

double max(double *array, int n) {
    double max = *(array);
    for (int i = 0; i < n; i++) {
        if (*(array + i) > max) {
            max = *(array + i);
        }
    }

    return max;
}

double min(double *array, int n) {
    double min = *(array);
    for (int i = 0; i < n; i++) {
        if (*(array + i) < min) {
            min = *(array + i);
        }
    }

    return min;
}

void normalize(double *array, int n) {
    double min_number = min(array, n);
    double max_number = max(array, n);

    for (int i = 0; i < n; i++) {
        double number = (*(array + i) - min_number) / (max_number - min_number);
        *(array + i) = number;
    }
}

void sort(double *array, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (*(array + i) < *(array + j)) {
//                swap(*(array + i), *(array + j));
                double tmp = *(array + i);
                *(array + i) = *(array + j);
                *(array + j) = tmp;
            }
        }
    }
}

int main() {
    double niza[200];
    int i, n;
    cin >> n;

    for (i = 0; i < n; i++) {
        cin >> niza[i];
    }

    cout << fixed << setprecision(3) << "MAX -> " << max(niza, n) << endl;
    cout << fixed << setprecision(3) << "MIN -> " << min(niza, n) << endl;

    normalize(niza, n);
    sort(niza, n);

    for (i = 0; i < n; i++) {
        cout << fixed << setprecision(3) << niza[i] << " ";
    }
    return 0;
}
