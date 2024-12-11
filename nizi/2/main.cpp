#include <iostream>

//Од стандарден влез се чита цел број n. Потоа се вчитуваат n низи од цели броеви (со максимална должина од 100 елементи),
// при што за секоја прво се внесува должината на низата, а потоа сите елементи на низата, па на крај бројот k.
//
//Да се напише програма која за секоја низа ќе ја трансформира истата, т.ш. за секој k-ти елемент ќе се направи замена
// на местата помеѓу него и неговиот претходник. Се смета дека важи k е најмалку 2.
//
//На пример, ако е дадена следната низа:
//
//1 2 3 4 5 6 7 8, за k=2 се добива
//
//2 1 4 3 6 5 8 7
//Да се испечатат сите трансформирани низи.

//Input
// 4
// 6 1 2 5 6 7 8 2
// 7 5 6 5 6 7 8 9 3
// 10 1 2 3 4 5 6 7 8 9 9 5
// 3 1 2 3 2
//Output
// 2 1 6 5 8 7
// 5 5 6 6 8 7 9
// 1 2 3 5 4 6 7 8 9 9
// 2 1 3

using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int array[100];
        int m;
        cin >> m;

        for (int j = 0; j < m; j++) {
            cin >> array[j];
        }

        int k;
        cin >> k;

        for (int j = k - 1; j < m; j += k) {
            int tmp = array[j];
            array[j] = array[j - 1];
            array[j - 1] = tmp;
        }

        for (int j = 0; j < m; j++) {
            cout << array[j] << " ";
        }

        cout << endl;
    }
    return 0;
}
