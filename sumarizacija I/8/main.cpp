#include <iostream>
#include <cstring>

using namespace std;

int main() {

    char line[100], maxLine[100];
    int maxLength = 0, maxStart = 0, maxEnd = 0;
    int start, end;

    while (cin.getline(line, 100)) {
        if (strcmp(line, "0") == 0) break;
        int counter = 0;
        int n = strlen(line);

        for (int i = 0; i < n; i++) {
            if (isdigit(line[i])) {
                ++counter;
            }
        }

        for (int i = 0; i < n; i++) {
            if (isdigit(line[i])) {
                start = i;
                break;
            }
        }

        for (int i = n - 1; i > start; i--) {
            if (isdigit(line[i])) {
                end = i;
                break;
            }
        }

        if (counter >= 2 && n >= maxLength) {
            maxLength = n;
            strcpy(maxLine, line);
            maxStart = start;
            maxEnd = end;
        }
    }

    for (int i = maxStart; i <= maxEnd; i++) {
        cout << maxLine[i];
    }
    return 0;
}
