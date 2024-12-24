#include <iostream>
#include <cstring>

using namespace std;

bool isVowel(char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int main() {
    char line[100];
    char c;
    int counter = 0;

    while (cin.getline(line, 100) && strcmp(line, "#") != 0) {
//        if(strcmp(line, "#") == 0) break; алтернатива за условот во while циклусот за излез од него
        for (int i = 0; i < strlen(line) - 1; i++) {
            if (isVowel(tolower(line[i])) && isVowel(tolower(line[i + 1]))) {
                cout << static_cast<char>(tolower(line[i])) << static_cast<char>(tolower(line[i + 1])) << endl;
                counter++;
            }
        }
    }

    cout << counter;
    return 0;
}
