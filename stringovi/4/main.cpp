#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;

int count_upper(char str[]) {
    int upper = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (isalpha(str[i]) && isupper(str[i])) {
            ++upper;
        }
    }

    return upper;
}

int count_lower(char str[]) {
    int lower = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (isalpha(str[i]) && islower(str[i])) {
            ++lower;
        }
    }

    return lower;
}

int main() {
    char str[1000];

    cin.getline(str, 1000);

    int upper = count_upper(str);
    int lower = count_lower(str);
    int total = upper + lower;

    cout << fixed << setprecision(4) << (float) upper / total << endl;
    cout << fixed << setprecision(4) << (float) lower / total << endl;
    return 0;
}
