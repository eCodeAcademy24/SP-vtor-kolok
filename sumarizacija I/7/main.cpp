#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int matrix[100][100];
    int array[n];

    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
            sum += matrix[i][j];
        }

        float average = (float) (sum) / m;
        int furthest = matrix[i][0];

        for (int j = 1; j < m; j++) {
            if (fabs(matrix[i][j] - average) > fabs(furthest - average)) {
                furthest = matrix[i][j];
            }
        }

        array[i] = furthest;
    }

    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    return 0;
}
