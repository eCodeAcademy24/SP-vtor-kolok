#include <iostream>
#include <cstring>

using namespace std;

bool palindrom(char str[]) {
    int n = strlen(str);

    for (int i = 0; i < n / 2; i++) {
        if (str[i] != str[n - i - 1]) {
            return false;
        }
    }

    return true;
}

int palindrom1(char *str, int start, int end) {
    if (start >= end) {
        return 1;
    } else {
        if (*(str + start) == *(str + end)) {
            return palindrom1(str, start + 1, end - 1);
        } else {
            return 0;
        }
    }
}

int main() {
    char str[100];

    cin.getline(str, 100);

    if (palindrom1(str, 0, strlen(str) - 1)) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}