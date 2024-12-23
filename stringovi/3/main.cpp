#include <iostream>
#include <cstring>

using namespace std;

bool podstring(char str1[], char str2[]) {
    if (strlen(str1) < strlen(str2)) {
        return false;
    }

    bool flag;
    for (int i = 0; i < strlen(str1); i++) {
        if (str1[i] == str2[0]) {
            flag = true;
            int iterator = i + 1;
            for (int j = 1; j < strlen(str2); j++) {
                if (str2[j] != str1[iterator]) {
                    flag = false;
                    break;
                }

                iterator++;
            }
        }

        if (flag) {
            return true;
        }
    }

    return false;
}

bool podstring1(char str1[], char str2[]) {
    if (strlen(str1) < strlen(str2)) {
        return false;
    }

    bool flag;
    for (int i = 0; i < strlen(str1); i++) {
        if (str1[i] == str2[0]) {
            flag = true;
            for (int j = 1; j < strlen(str2); j++) {
                if (str2[j] != str1[i + j]) {
                    flag = false;
                    break;
                }
            }
        }

        if (flag) {
            return true;
        }
    }

    return false;
}

int main() {
    char str1[100];
    char str2[100];

    cin.getline(str1, 100);
    cin.getline(str2, 100);

    if (podstring1(str1, str2)) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}
