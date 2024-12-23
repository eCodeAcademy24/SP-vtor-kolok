#include <iostream>
#include <cstring>

using namespace std;

int pojavuvanje_znak(char str[], char c) {
    int brojac = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (tolower(str[i]) == tolower(c)) {
            ++brojac;
        }
    }

    return brojac;
}

int pojavuvanje_znak1(char *str, char c) {
    int brojac = 0;

    while (*str != '\0') {
        if (tolower(*str) == tolower(c)) {
            ++brojac;
        }
        str++;
    }

    return brojac;
}

int pojavuvanje_znak2(char *str, char c) {
    if (*str == '\0') {
        return 0;
    } else {
        if (tolower(*str) == tolower(c)) {
            return 1 + pojavuvanje_znak2(str + 1, c);
        } else {
            return pojavuvanje_znak2(str + 1, c);
        }
    }
}

int main() {
    char str[100];
    char c;

    cin.getline(str, 100);
    cin >> c;

    cout << "So []: " << pojavuvanje_znak(str, c) << endl;
    cout << "So *: " << pojavuvanje_znak1(str, c) << endl;
    cout << "So rekurzija: " << pojavuvanje_znak2(str, c) << endl;
    return 0;
}
