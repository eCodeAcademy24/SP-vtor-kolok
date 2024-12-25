#include <iostream>
#include <cstring>

using namespace std;

int svrznik(char *line) {
    int brojac_svrznici = 0; // бројач на сврзници во една линија
    int brojac_bukvi = 0; // бројач на букви во еден збор

    for (int i = 0; i < strlen(line); i++) {
        if (isspace(line[i]) || !isalnum(line[i])) {
            if (brojac_bukvi >= 1 && brojac_bukvi <= 3) {
                brojac_svrznici++;
            }
            brojac_bukvi = 0;
        } else {
            brojac_bukvi++;
        }
    }

    return brojac_svrznici;
}

int main() {
    char line[101], max_line[101];
    int max = 0;
    int flag = true;

    while (cin.getline(line, 101)) {
        if (strcmp(line, "#") == 0) break;

        int svrznici = svrznik(line);

        if (flag) {
            max = svrznici;
            strcpy(max_line, line);
            flag = false;
            continue;
        }

        if (svrznici > max) {
            max = svrznici;
            strcpy(max_line, line);
        }
    }

    cout << max << ": " << max_line;
    return 0;
}