#include <iostream>

//Input
// 5
// 54321
// 6521
// 12
// 5
// 777
//Output
// 1
// 1
// 0
// 1
// 0

using namespace std;

int rekurzija(int x) {
    if (x < 10) { // stop uslov
        return 1;
    } else { // rekurziven del
        if ((x % 10) < (x / 10 % 10)) {
            return rekurzija(x / 10);
        } else {
            return 0;
        }
    }
}

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int broj;
        cin >> broj;

        cout << rekurzija(broj) << endl;
    }
    return 0;
}
