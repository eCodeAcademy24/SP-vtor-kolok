#include <iostream>
#include <cstring>

using namespace std;

int dolzina_string(char *str) {
    int brojac = 0;
    while (*str != '\0') {
        ++brojac;
        ++str;
    }

    return brojac;
}

int dolzina_string1(char *str) {
    if (*str == '\0') {
        return 0;
    } else {
        return 1 + dolzina_string1(str + 1);
    }
}

int dolzina_string2(char str[], int n) {
    if (n == 0) {
        return 0;
    } else {
        return 1 + dolzina_string2(str, n - 1);
    }
}

int main() {
    char str[100];

    cin.getline(str, 100);

    cout << "So strlen(): " << strlen(str) << endl;
    cout << "So *: " << dolzina_string(str) << endl;
    cout << "So rekurzija so *: " << dolzina_string1(str) << endl;
    cout << "So rekurzija so []: " << dolzina_string2(str, strlen(str)) << endl;
    return 0;
}
