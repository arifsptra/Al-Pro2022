#include <iostream>
#include <string.h>

using namespace std;

int main(){
    char name[100];
    char name2[100];

    cout << "Masukkan Nama depan: ";
    cin >> name;

    cout << "Masukkan Nama Belakang: ";
    cin >> name2;
    
    strcat(name, name2);
    
    cout << "Nama kamu ada " << strlen(name) << "Karakter" << endl;
    cout << "..." << endl;
    cout << strupr(name) << endl;
    cout << strlwr(name);

    return 0;
}