#include <iostream>

using namespace std;

int biggestFirstDigit(int number) {
    int digit;
    while (number) {
        digit = number % 10;
        number /= 10;
    }

    return digit;
}

int main() {
    int n, number, digit, maxDigit, maxNumber;

    while (1) {
        cin >> n;
        if (n == 0) {
            break;
        }

        maxNumber = 0;
        maxDigit = 0;
        for (int i = 0; i < n; i++) {
            cin >> number;

            digit = biggestFirstDigit(number);

            if (digit > maxDigit) {
                maxDigit = digit;
                maxNumber = number;
            }
        }

        cout << maxNumber << endl;
    }

}