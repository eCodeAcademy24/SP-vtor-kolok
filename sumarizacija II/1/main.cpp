#include <iostream>
#include <cstring>

using namespace std;

int isPalindrome(char *line) {
    int n = strlen(line);
    for (int i = 0; i < n / 2; i++) {
        if (line[i] != line[n - i - 1]) {
            return 0;
        }
    }
    return 1;
}

int hasSpecChar(char *line) {
    for (int i = 0; i < strlen(line); i++) {
        if (!isalnum(line[i])) {
            return 1;
        }
    }
    return 0;
}

int main() {
    int n;
    cin >> n;

    char line[100];
    char maxLine[100];

    int flag = 0;
    for (int i = 0; i < n; i++) {
        cin >> line;

        if (isPalindrome(line) && hasSpecChar(line) && strlen(line) > strlen(maxLine)) {
            strcpy(maxLine, line);
            flag = 1;
        }
    }

    if (!flag) {
        cout << "Nema!";
    } else {
        cout << maxLine;
    }

    return 0;
}
