#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int n;
    cin >> n;

    char matrix[100][100];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    char word[11];
    cin >> word;

    int r1, r2, c1, c2;
    int flag;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] == word[0]) {
                // хоризонтално десно
                flag = true;
                for (int k = 1; k < strlen(word); k++) {
                    if (matrix[i][j + k] != word[k]) {
                        flag = false;
                        break;
                    }
                }

                if (flag) {
                    r1 = i;
                    c1 = j;
                    r2 = i;
                    c2 = j + (strlen(word) - 1);

                    // 0, 2 -> 3, 2
                    cout << r1 << ", " << c1 << " -> " << r2 << ", " << c2;
                    return 0;
                }

                // вертикално надоле
                flag = true;
                for (int k = 1; k < strlen(word); k++) {
                    if (matrix[i + k][j] != word[k]) {
                        flag = false;
                        break;
                    }
                }

                if (flag) {
                    r1 = i;
                    c1 = j;
                    r2 = i + (strlen(word) - 1);
                    c2 = j;

                    // 0, 2 -> 3, 2
                    cout << r1 << ", " << c1 << " -> " << r2 << ", " << c2;
                    return 0;
                }

                // хоризонтално лево
                flag = true;
                for (int k = 1; k < strlen(word); k++) {
                    if (matrix[i][j - k] != word[k]) {
                        flag = false;
                        break;
                    }
                }

                if (flag) {
                    r1 = i;
                    c1 = j;
                    r2 = i;
                    c2 = j - (strlen(word) - 1);

                    // 0, 2 -> 3, 2
                    cout << r1 << ", " << c1 << " -> " << r2 << ", " << c2;
                    return 0;
                }

                // вертикално нагоре
                flag = true;
                for (int k = 1; k < strlen(word); k++) {
                    if (matrix[i - k][j] != word[k]) {
                        flag = false;
                        break;
                    }
                }

                if (flag) {
                    r1 = i;
                    c1 = j;
                    r2 = i - (strlen(word) - 1);
                    c2 = j;

                    // 0, 2 -> 3, 2
                    cout << r1 << ", " << c1 << " -> " << r2 << ", " << c2;
                    return 0;
                }
            }
        }
    }

    cout << "Not found";
    return 0;
}
