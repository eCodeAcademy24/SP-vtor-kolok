#include <iostream>

//Input
// 987432
//Output
// 189

//Input
// 22334455
//Output
// 120

//Output
// 17
// 1

using namespace std;

int proizvod(int broj) {
    if (broj < 10) {
        if (broj == 0) {
            return 1;
        } else {
            return broj;
        }
    } else {
        return broj % 10 * proizvod(broj / 100);
    }
}

int main() {
    int n;
    cin >> n;

    cout << proizvod(n / 10);
    return 0;
}
