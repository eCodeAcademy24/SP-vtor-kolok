#include <iostream>

//Input
// 2 2
// 25 52
// 52 24
//Output
// 1

//Input
// 3 3
// 1 1 1
// 0 0 0
// 1 1 0
//Output
// 2

//Input
// 3 3
// 1 1 1
// 0 0 0
// 1 1 1
//Output
// 0

using namespace std;

void readMatrix(int a[100][100], int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
}

int zbir_na_elementi(int a[100][100], int n, int j) {
    int zbir = 0;

    for (int i = 0; i < n; i++) {
        zbir += a[i][j];
    }

    return zbir;
}

bool dali_e_min(int min_zbir, int zbir) {
//    if (min_zbir > zbir) {
//        return true;
//    }
//
//    return false;
    return min_zbir > zbir;
}

int main() {
    int n, m;
    cin >> n >> m;

    int a[100][100];
    readMatrix(a, n, m);

    int min_zbir = 0;
    int index_j = 0;

    for (int j = 0; j < m; j++) {
        int zbir = zbir_na_elementi(a, n, j);

        if (j == 0) {
            min_zbir = zbir;
            index_j = j; // ова не мора да се напише тука
            continue;
        }

        if (dali_e_min(min_zbir, zbir)) {
            min_zbir = zbir;
            index_j = j;
        }
    }

    cout << index_j;

    return 0;
}
