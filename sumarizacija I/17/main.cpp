#include <iostream>

using namespace std;

int main() {
    int n, m;
    int matrix[100][100];

    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }

    if (m % 2 == 0) {
        // за парни колони
        for (int i = 0; i < n; i++) {
            int firstHalf = 0;
            int secondHalf = 0;
            for (int j = 0; j < m; j++) {
                if (j > m / 2 - 1) {
                    secondHalf += matrix[i][j];
                } else {
                    firstHalf += matrix[i][j];
                }
            }
            matrix[i][m / 2] = abs(firstHalf - secondHalf);
            matrix[i][m / 2 - 1] = abs(firstHalf - secondHalf);
        }
    } else {
        // за непарни колони
        for (int i = 0; i < n; i++) {
            int firstHalf1 = 0;
            int secondHalf1 = 0;
            for (int j = 0; j < m; j++) {
                if (j >= m / 2) {
                    secondHalf1 += matrix[i][j];
                    if (j == m / 2) {
                        firstHalf1 += matrix[i][j];
                    }
                } else {
                    firstHalf1 += matrix[i][j];
                }
            }
            matrix[i][m / 2] = abs(firstHalf1 - secondHalf1);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}