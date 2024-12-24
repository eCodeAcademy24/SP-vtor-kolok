#include <iostream>
#include <cstring>

using namespace std;

void sort(int digits[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (digits[i] > digits[j]) {
//                swap(digits[i], digits[j]);
                int tmp = digits[i];
                digits[i] = digits[j];
                digits[j] = tmp;
            }
        }
    }
}

int main() {
    char line[101];
    int digits[100];

    while (cin.getline(line, 101)) {
        if (strcmp(line, "#") == 0) break;

        int counter = 0;
        for (int i = 0; i < strlen(line); i++) {
            if (isdigit(line[i])) {
                digits[counter] = line[i] - '0';
                ++counter;
            }
        }

        cout << counter << ":";

        sort(digits, counter);

        for (int i = 0; i < counter; i++) {
            cout << digits[i];
        }

        cout << endl;
    }
    return 0;
}