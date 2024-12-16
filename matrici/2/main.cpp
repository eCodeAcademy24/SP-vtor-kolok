#include <iostream>

//Input
// 3
// 1 2 3
// 1 1 1
// 2 2 2
//Output
//-2
//-2

//Input
// 5
// 1 2 3 4 5
// 9 8 7 6 5
// 3 2 4 1 5
// 6 6 6 6 0
// 4 4 4 4 4
//Output
// -2
// 4
using namespace std;

int main() {
    int n;
    cin >> n;

    int m[100][100];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> m[i][j];
        }
    }

    int glavna_dijagonala = 0, sporedna_dijagonala = 0, prva_kolona = 0, posledna_kolona = 0;


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) { // glavna dijagonala
                glavna_dijagonala += m[i][j];
            }

            if ((i + j) == (n - 1)) { // sporedna dijagonala
                sporedna_dijagonala += m[i][j];
            }

            if (j == 0) { // prva kolona
                prva_kolona += m[i][j];
            }

            if (j == n - 1) { // posledna kolona
                posledna_kolona += m[i][j];
            }
        }
    }

    cout << glavna_dijagonala - sporedna_dijagonala << endl;
    cout << prva_kolona - posledna_kolona << endl;
    return 0;
}
