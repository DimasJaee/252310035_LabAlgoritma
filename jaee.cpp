#include <iostream>
#include <cmath> // untuk fungsi abs()
using namespace std;

int main() {
    int n;
    cout << "Masukkan jumlah baris = ";
    cin >> n;

    int size = 2 * n - 1;  // ukuran persegi

    for (int i = 1; i <= size; i++) {
        for (int j = 1; j <= size; j++) {
            int dx = abs(i - n);       // jarak vertikal dari tengah
            int dy = abs(j - n);       // jarak horizontal dari tengah
            double jarak = dx + dy * 0.2; // rasio 0.6 agar belah ketupat melebar

            if (jarak < n - 1)
                cout << " ";
            else
                cout << "*";
        }
        cout << endl;
    }

    return 0;
}
