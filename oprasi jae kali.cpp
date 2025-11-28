#include <iostream>
using namespace std;

int main()
{
	int a,b,c=0, d=0;
	
	cout << "Oprasi perkalian" << endl;
	getchar();
	cout << "Masukan nilai A = ";
	cin >> a;
	
	cout << "Masukan nilai b = ";
	cin >> b;
	
	c = a % b;
	d = a * b;
	
	cout << "Nilai dari C = A % B = " << c << endl;
	cout << "Hasil dari D = A * B = " << d;
	
	return 0;
	
}
