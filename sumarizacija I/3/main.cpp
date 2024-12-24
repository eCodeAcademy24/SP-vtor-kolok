#include <iostream>

using namespace std;

int sum_pos(int *array, int index, int n){
    if(index > n){
        return 0;
    }

    int sum = 0;
    for(int i = index; i < n; i++){
        sum += array[i];
    }

    return sum;
}

int main(){
    int array[100], n, index;

    cin >> n;

    for(int i = 0 ;i < n; i++){
        cin >> array[i];
    }

    cin >> index;

    cout << sum_pos(array, index, n);
    return 0;
}