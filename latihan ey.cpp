#include <iostream>
using namespace std;

int main() {
    int a[3][3], b[3][3], sum[3][3];
    int i, j;

    cout << "Masukkan matriks pertama (3x3):" << endl;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            cout << "a[" << i + 1 << "][" << j + 1 << "]: ";
            cin >> a[i][j];
        }
    }

    cout << "\nHasil Matrix:\n";

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

