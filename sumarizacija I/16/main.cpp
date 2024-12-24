#include <iostream>

using namespace std;

int maksCifra(int number) {
    if (number < 10) {
        return number;
    }

    int lastDigit = number % 10;
    int remaining = maksCifra(number / 10);

//    if(lastDigit > remaining) return lastDigit;
//    else return remaining; истото како и тернарната функција
    return (lastDigit > remaining) ? lastDigit : remaining;
}

int main() {
    int number;

    while (cin >> number) {
        cout << maksCifra(number) << endl;
    }
    return 0;
}