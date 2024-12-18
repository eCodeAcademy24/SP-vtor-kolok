#include <iostream>

//Input
// 717623
//Output
// 16

//Input
// 9898
//Output
// 18

//Input
// 123
// 2

//Input
// 123456
//Output
// 9

using namespace std;

int f(int broj) {
    if (broj < 10) { // stop uslov
        return broj;
    } else { // rekurziven del
        return broj % 10 + f(broj / 100);
    }
}

int main() {

    int broj;
    cin >> broj;

    cout << f(broj / 10);
    return 0;
}
