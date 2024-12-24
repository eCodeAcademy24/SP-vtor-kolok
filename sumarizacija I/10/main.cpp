#include <iostream>
#include <cstring>

using namespace std;

int main() {

    char line[81];

    char z1, z2;
    cin >> z1;
    cin >> z2;


    while (cin.getline(line, 81)) {
        if (strcmp(line, "#") == 0) {
            break;
        }

        int n = strlen(line);

        int start = 0;
        for (int i = 0; i < n; i++) {
            if (line[i] == z1) {
                start = i;
                break;
            }
        }

        int end = 0;
        for (int i = n - 1; i >= start; i--) {
            if (line[i] == z2) {
                end = i;
                break;
            }
        }

        for (int i = start + 1; i < end; i++) {
            cout << line[i];
        }

        cout << endl;

    }
    return 0;
}