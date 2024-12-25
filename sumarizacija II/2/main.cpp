#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;

    int m = (int) (ceil(sqrt(n)));

    int element = 1;
    int matrix[m][m];

    for (int j = 0; j < m; j++) {
        if (j % 2 == 0) { // парен индекс (горе-надолу)
            for (int i = 0; i < m; i++) {
                if (element <= n) {
                    matrix[i][j] = element;
                    element++;
                } else {
                    matrix[i][j] = 0;
                }
            }
        } else { // непарен индекс (доле-нагоре)
            for (int i = m - 1; i >= 0; i--) {
                if (element <= n) {
                    matrix[i][j] = element;
                    element++;
                } else {
                    matrix[i][j] = 0;
                }
            }
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            cout << matrix[i][j] << " ";
        }

        cout << endl;
    }
    return 0;
}