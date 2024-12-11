#include <iostream>
//За дадена низа од N големина, исчитајте ја истата и потоа:
//
//    Испечатете ја во нејзината оригинална форма
//    Сменете го распоредот на низата во обратна насока
//    Отстранете го секој втор член
//    Повторно сменете го распоредот на низата во обратна насока
//
//За секоја од овие промени испечатете ја низата.
//
//Пример:
//
//Влез:
//
// 5
// 1 2 3 4 5
//
//Излез:
//
//1 2 3 4 5
//
//5 4 3 2 1
//
//5 3 1
//
//1 3 5
using namespace std;

int main() {
    int n;
    cin >> n;

    int array[100];

    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

//    for (int i = n - 1; i >= 0; i--) {
//        cout << array[i] << " ";
//    }

    for (int i = 0; i < n / 2; i++) {
        int tmp = array[i];
        array[i] = array[n - 1 - i];
        array[n - 1 - i] = tmp;
    }

    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    for (int i = 1; i < n; i++) {
        array[i] = array[i * 2];
        --n;
    }

    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < n / 2; i++) {
        int tmp = array[i];
        array[i] = array[n - 1 - i];
        array[n - 1 - i] = tmp;
    }

    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
    return 0;
}
