#include <iostream>
using namespace std;

int main() {
    string siswa;
    int nilai1, nilai2, nilai3;

    cout << "Nama Siswa: ";
    getline(cin, siswa);

    cout << "Nilai Pertandingan I  : ";
    cin >> nilai1;
    cout << "Nilai Pertandingan II : ";
    cin >> nilai2;
    cout << "Nilai Pertandingan III: ";
    cin >> nilai3;

    int rataRata = (nilai1 + nilai2 + nilai3) / 3;
    int kategori;

    cout << "Siswa yang bernama " << siswa << endl;
    cout << "Memperoleh nilai rata-rata " << rataRata << " dari hasil perlombaan yang diikutinya" << endl;

    if (rataRata >= 85)
        kategori = 1;
    else if (rataRata >= 75)
        kategori = 2;
    else
        kategori = 3;

    switch (kategori) {
        case 1:
            cout << "Hadiah yang didapat adalah Komputer Core i5" << endl;
            break;
        case 2:
            cout << "Hadiah yang didapat adalah uang sebesar Rp. 2.500.000" << endl;
            break;
        case 3:
            cout << "Hadiah yang didapat adalah hiburan" << endl;
            break;
        default:
            cout << "Kategori tidak dikenal." << endl;
    }
    return 0;
}

