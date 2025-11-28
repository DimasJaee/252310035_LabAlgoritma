#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    string text = "??  Halo, aku bergerak sendiri ??";
    
    for (int i = 0; i < 50; i++) {
        system("cls");
        for (int j = 0; j < i; j++)
            cout << " ";
        cout << text << endl;
        Sleep(100);
    }
    return 0;
}
