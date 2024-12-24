#include <iostream>

using namespace std;

int main() {

    int x;
    cin >> x;

    int n, m;
    cin >> n >> m;

    int matrix[100][100];

    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
            sum += matrix[i][j];
        }

        if (sum > x) {
            for (int j = 0; j < m; j++) {
                matrix[i][j] = 1;
            }
        } else if (sum < x) {
            for (int j = 0; j < m; j++) {
                matrix[i][j] = -1;
            }
        } else if (sum == x) {
            for (int j = 0; j < m; j++) {
                matrix[i][j] = 0;
            }
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
