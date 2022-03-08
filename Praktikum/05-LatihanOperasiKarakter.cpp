#include <iostream>
#include <ctype.h>

using namespace std;

int main(){
    char karakter;

    cout << "Masukkan Karakter: ";
    cin >> karakter;

    // islower => Returns true(non-zero) if character is lowercase
    if(islower(karakter)){
        cout << "Karakter anda huruf kecil" << endl;

    // isupper => Returns true(non-zero) if character is a capital letter
    }else if(isupper(karakter)){
        cout << "Karakter anda huruf kapital" << endl;
    
    // isdigit => Returns true(non-zero) if character is a digit
    }else if(isdigit(karakter)){
        cout << "Karakter anda sebuah digit" << endl;
    }

    return 0;
}