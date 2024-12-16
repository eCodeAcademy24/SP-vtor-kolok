#include <iostream>

//Input
// 5
// 1 2 3 9 8
// 5 5 5 5 5
// 0 1 2 0 0
// 9 1 2 3 4
// 1 1 1 1 1
//Output
// 4
// најдолгата е: 1 2 3 4 --> ова не треба да се печати

//Input
// 6
// 1 2 3 4 4 4
// 8 9 7 5 6 1
// 4 5 6 7 8 1
// 1 2 3 5 1 1
// 2 2 2 2 2 2
// 0 0 5 6 7 8
//Output
// 5
// најдолгата е: 4 5 6 7 8 --> ова не треба да се печати

//Input
// 3
// 1 1 1
// 2 2 2
// 0 0 0
//Output
// 1
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

    int podniza, maxPodniza = 0;

    for (int i = 0; i < n; i++) {
        podniza = 1;
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] < matrix[i][j + 1]) {
                ++podniza;
            }
        }

        if (i == 0) {
            maxPodniza = podniza;
            continue;
        }

        if (podniza > maxPodniza) {
            maxPodniza = podniza;
        }
    }

    cout << maxPodniza;
    return 0;
}
