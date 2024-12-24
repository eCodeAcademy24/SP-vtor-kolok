#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int kol = n * 2;
    int matrixA[n][kol];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < kol; j++) {
            cin >> matrixA[i][j];
        }
    }

    int matrixB[kol][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < kol / 2; j++) {
            matrixB[i][j] = matrixA[i][j];
        }
    }

    int redica = kol / 2;
    for (int i = 0; i < n; i++) {
        int kolona = 0;

        for (int j = kol / 2; j < kol; j++) {
            matrixB[redica][kolona] = matrixA[i][j];
            ++kolona;
        }

        redica++;
    }

    for (int i = 0; i < kol; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrixB[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}