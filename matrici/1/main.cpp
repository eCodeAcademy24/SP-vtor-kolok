#include <iostream>
//Input
// 4 5
// 1 0 0 1 0
// 0 0 1 1 1
// 0 1 0 0 1
// 1 1 0 1 0
//Output
// * 2 3 * 3
// 2 3 * * *
// 3 * 5 5 *
// * * 3 * 2

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int matrix[100][100];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int counter = 0;
            if (matrix[i][j] == 0) {
                if (matrix[i + 1][j] == 1) { // dolen sosed
                    counter++;
                }

                if (matrix[i - 1][j] == 1) { // goren sosed
                    counter++;
                }

                if (matrix[i][j + 1] == 1) { // desen sosed
                    counter++;
                }

                if (matrix[i][j - 1] == 1) { // lev sosed
                    counter++;
                }

                if (matrix[i - 1][j - 1] == 1) { // goren lev sosed
                    counter++;
                }

                if (matrix[i - 1][j + 1] == 1) { // goren desen sosed
                    counter++;
                }

                if (matrix[i + 1][j + 1] == 1) { // dolen desen sosed
                    counter++;
                }

                if (matrix[i + 1][j - 1] == 1) { // dolen lev sosed
                    counter++;
                }

                cout << counter << " ";
            } else {
                cout << "* ";
            }
        }

        cout << endl;
    }
    return 0;
}
