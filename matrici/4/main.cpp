#include <iostream>

//Input
// 5
// -1 2 3 4 9
// 2 2 8 -1 7
// 0 1 2 3 4
// -1 -1 -1 2 5
// 0 2 5 -9 1
//Output
// 5 19
// 0 -1

using namespace std;

int main() {
    int n;
    cin >> n;

    int matrix[100][100];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    int nova_matrica[2][2];
    int region_1 = 0, region_2 = 0, region_3 = 0, region_4 = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i < n / 2 && j < n / 2) { // region 1
                region_1 += matrix[i][j];
            } else if (i < n / 2 && j > n / 2) { // region 2
                region_2 += matrix[i][j];
            } else if (i > n / 2 && j < n / 2) { // region 3
                region_3 += matrix[i][j];
            } else if (i > n / 2 && j > n / 2) { // region 4
                region_4 += matrix[i][j];
            }
        }
    }

    nova_matrica[0][0] = region_1;
    nova_matrica[0][1] = region_2;
    nova_matrica[1][0] = region_3;
    nova_matrica[1][1] = region_4;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << nova_matrica[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
