#include <iostream>
#include <cmath> // untuk fungsi abs()
using namespace std;

int main() {
    int n;
    cout << "Masukkan jumlah baris = ";
    cin >> n;

    int size = 2 * n - 1; // lebar dan tinggi persegi
    for (int i = 1; i <= size; i++) {
        for (int j = 1; j <= size; j++) {

            // hitung jarak dari tengah
            int jarak = abs(i - n) + abs(j - n);

            // jika jarak lebih kecil dari n-1 -> bagian dalam (kosong)
            if (jarak < n - 1)
                cout << " ";
            else
                cout << "*";
        }
        cout << endl;
    }

    return 0;
}
