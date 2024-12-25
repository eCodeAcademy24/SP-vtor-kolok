#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int n;
    char line[100];
    int counter;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> line;
        counter = 0;

        for (int j = 0; j < strlen(line); j++) {
            line[j] = tolower(line[j]);
            if (tolower(line[j]) == 'a' && tolower(line[j + 1]) == '1' && tolower(line[j + 2]) == 'c') {
                counter++; // Count occurrences of a1c
            }
        }

        if (counter >= 2) {
            cout << line << endl;
        }
    }

    return 0;
}