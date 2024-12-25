#include <iostream>
#include <iomanip>

using namespace std;

void printMatrix(float matrix[100][100], int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << fixed << setprecision(2) << matrix[i][j] << " ";
        }
        cout << "\n";
    }
}

int main() {
    int n, m;
    float matrix[100][100], helpMatrix[100][100];

    cin >> n >> m;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> matrix[i][j];
        }
    }

    int indexI1, indexI2, indexJ1, indexJ2;

    cin >> indexI1 >> indexJ1;
    cin >> indexI2 >> indexJ2;

    float sum;
    int counter;

    for(int i = indexI1; i <= indexI2; i++){
        for(int j = indexJ1; j <= indexJ2; j++){
            sum = matrix[i][j];
            counter = 1;
            if (i > 0){ // goren
                sum += matrix[i - 1][j];
                counter++;
            }
            if(i < n - 1) { // dole
                sum += matrix[i + 1][j];
                counter++;
            }
            if(j > 0) { // levo
                sum += matrix[i][j - 1];
                counter++;
            }
            if(j < m - 1) { // desno
                sum += matrix[i][j + 1];
                counter++;
            }
            if (i > 0 && j > 0) { // gore levo
                sum += matrix[i - 1][j - 1];
                counter++;
            }
            if(i < n - 1 && j < m - 1) { // dole desno
                sum += matrix[i + 1][j + 1];
                counter++;
            }
            if(i > 0 && j < m - 1){ // gore desno
                sum += matrix[i - 1][j + 1];
                counter++;
            }
            if(i < n - 1 && j > 0){ // dole levo
                sum += matrix[i + 1][j - 1];
                counter++;
            }
            helpMatrix[i][j] = sum / counter;
        }
    }

    for(int i = indexI1; i <= indexI2; i++){
        for(int j = indexJ1; j <= indexJ2; j++){
            matrix[i][j] = helpMatrix[i][j];
        }
    }

    printMatrix(matrix, n, m);
    return 0;
}
