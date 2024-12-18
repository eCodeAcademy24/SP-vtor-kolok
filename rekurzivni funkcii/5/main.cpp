#include <iostream>

using namespace std;

int rekurzija(int broj) {
    if (broj < 10) {
        return 1;
    } else {
        if ((broj % 10) > (broj / 10 % 10)) {
            return rekurzija(broj / 10);
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
        if (rekurzija(broj)) {
            cout << "DA" << endl;
        } else {
            cout << "NE" << endl;
        }
    }
    return 0;
}
