#include <iostream>

using namespace std;

int main() {

    int n, m;
    cin >> n >> m;

    int a[100][100];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    int counter_redici = 0;
    int counter_koloni = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] == 1 && a[i][j + 1] == 1 && a[i][j + 2] == 1) {
                ++counter_redici;
                break;
            }
        }
    }

    for (int j = 0; j < m; j++) {
        for (int i = 0; i < n; i++) {
            if (a[i][j] == 1 && a[i + 1][j] == 1 && a[i + 2][j] == 1) {
                counter_koloni++;
                break;
            }
        }
    }

    cout << counter_koloni + counter_redici;
    return 0;
}