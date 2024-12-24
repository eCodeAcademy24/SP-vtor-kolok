#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int a[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    int tmp, tmp1;
    cin >> tmp >> tmp1;

    int sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i < tmp && j >= tmp1) { // I квадрант
                sum1 += a[i][j];
            } else if (i < tmp && j < tmp1) { // II квадрант
                sum2 += a[i][j];
            } else if (i >= tmp && j < tmp1) { // III квадрант
                sum3 += a[i][j];
            } else { // if(i >= tmp && j >= tmp1) IV квадрант
                sum4 += a[i][j];
            }
        }
    }

    cout << sum1 << " " << sum2 << " " << sum3 << " " << sum4;
    return 0;
}
