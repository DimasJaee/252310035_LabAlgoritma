#include <iostream>
using namespace std;

int  main(){
	int a = 5;
	
	// incerment dan decrement
	cout  << "Nilai awal a = " << a << endl;
	
	// pre-incerment : a ditambah dulu jadi 6, lalu ditampilkan
	cout << "pre-incerment -> ++a = " << ++a << endl;
	
	// a = 6
	
	// post-incerment : nilai lama a=6 ditampilkan dulu, lalu a jadi 7
	cout << "post-incerment-> a++ = " << a++ << ", sekarang a = " << a << endl;
	 
	 // a = 7
	 
	 // pre-decerment : a dikurangi dulu, jadi 6, lalu ditampilkan 
	 cout << "pre-decrement - --a = >" << --a << endl;
	 
	 //a = 6
	 
	 // post-decerment : nilai lama a=6 ditampilkan dulu, lalu a jadi 5
	 cout << "post-decrement -> a-- = " << a-- << ", Sekarang a = " << a << endl;
	 
	return 0;
}
