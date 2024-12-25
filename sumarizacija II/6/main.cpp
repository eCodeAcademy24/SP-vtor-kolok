#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n, m;
    float matrix[100][100], help_matrix[100][100];

    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }

    int indexI1, indexI2, indexJ1, indexJ2;
    cin >> indexI1 >> indexJ1;
    cin >> indexI2 >> indexJ2;

    for (int i = indexI1; i <= indexI2; i++) {
        for (int j = indexJ1; j <= indexJ2; j++) {
            float sum = matrix[i][j];
            int counter = 1;

            if (i > 0) { // горен
                sum += matrix[i - 1][j];
                counter++;
            }

            if (i < n - 1) { // долен
                sum += matrix[i + 1][j];
                counter++;
            }

            if (j > 0) { // лево
                sum += matrix[i][j - 1];
                counter++;
            }

            if (j < m - 1) { // десно
                sum += matrix[i][j + 1];
                counter++;
            }

            if (i > 0 && j > 0) { // горе лево
                sum += matrix[i - 1][j - 1];
                counter++;
            }

            if (i < n - 1 && j < m - 1) { // доле десно
                sum += matrix[i + 1][j + 1];
                counter++;
            }

            if (i > 0 && j < m - 1) { // горе десно
                sum += matrix[i - 1][j + 1];
                counter++;
            }

            if (i < n - 1 && j > 0) { // доле лево
                sum += matrix[i + 1][j - 1];
                counter++;
            }

            help_matrix[i][j] = sum / counter;
        }
    }

    for (int i = indexI1; i <= indexI2; i++) {
        for (int j = indexJ1; j <= indexJ2; j++) {
            matrix[i][j] = help_matrix[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << fixed << setprecision(2) << matrix[i][j] << " ";
        }

        cout << endl;
    }
    return 0;
}
