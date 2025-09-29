// Kalkulator Muhammad Dimas Nygra Anggoro
#include <iostream>
using namespace std;


int main()
{
	// Variabel
	int satu,dua;
    int tiga,empat;
    int lima,enam;

    // Penjumlahan
    cout << "Nomor 1 - Penjumlahan" << endl;
    cout << "Masukkan 2 angka" << endl;
    cout << "A = ";
    cin >> satu;
    cout << "B = ";
    cin >> dua;
    cout << "Hasil A + B = " << satu+dua << endl;

    // Pengurangan
    cout << "\nNomor 2 - Pengurangan" << endl;
    cout << "Masukkan 2 angka" << endl;
    cout << "C = ";
    cin >> tiga;
    cout << "D = ";
    cin >> empat;
    cout << "Hasil C - D = " << tiga-empat << endl;

    // Perkalian
     cout << "\nNomor 3 - Perkalian" << endl;
    cout << "Masukkan 2 angka" << endl;
    cout << "E = ";
    cin >> lima;
    cout << "F = ";
    cin >> enam;
    cout << "Hasil E * F = " << lima*enam << endl;
}
