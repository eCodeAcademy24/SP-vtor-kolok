#include <iostream>

//Input
// 1
// 1234567890
//Output
// 45
// 45

//Input
// 5
// 1234
// 123
// 12345
// 12321
// 12321
//Output
// 10
// 6
// 15
// 9
// 9
// 49
using namespace std;

int sumOfDigits(int number) {
    if (number < 10) { // stop uslov
        return number;
    } else {
        return number % 10 + sumOfDigits(number / 10);
    }
}

int main() {

    int n, i;
    cin >> n;
    int sum = 0;

    for (i = 0; i < n; i++) {
        int current;
        cin >> current;
        int sum_of_digits = sumOfDigits(current);
        sum += sum_of_digits;
        cout << sum_of_digits << endl;
    }

    cout << sum;
    return 0;
}
