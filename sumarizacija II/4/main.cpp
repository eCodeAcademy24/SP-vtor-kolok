#include <iostream>

using namespace std;

void zameni(int mat[30][30], int m, int n) {
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> mat[i][j];
        }
    }
}


void pecati(int mat[][30], int m, int n) {
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

void transformiraj(int mat[30][30], int m, int n, int r, int k) {
    int min = mat[0][0];
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (mat[i][j] < min) {
                min = mat[i][j];
            }
        }
    }

    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < k; ++j) {
            mat[i][j] = min;
        }
    }
}

int main() {
    int m, n;
    cin >> m >> n;

    int r, k;
    cin >> r >> k;

    int mat[30][30];
    zameni(mat, m, n);
    transformiraj(mat, m, n, r, k);
    pecati(mat, m, n);
    return 0;
}