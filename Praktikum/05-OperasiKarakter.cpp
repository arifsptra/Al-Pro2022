#include <iostream>
#include <ctype.h>
#include <stdio.h>

using namespace std;

int main(){
    char karakter;

    cout << "Masukkan Karakter: ";
    cin >> karakter;

    // islower => Returns true(non-zero) if character is lowercase
    if(islower(karakter)){
        cout << "Karakter anda huruf kecil" << endl;
        // toupper => Convert lowercase letters to capital
        // cout << "Huruf kapitalnya: " << tolower(karakter) << endl;
        printf("Huruf Kapitalnya: %c", toupper(karakter));

    // isupper => Returns true(non-zero) if character is a capital letter
    }else if(isupper(karakter)){
        cout << "Karakter anda huruf kapital" << endl;
        // tolower => Convert capital letters to lowercase
        // cout << "Huruf kecilnya: " << tolower(karakter) << endl;
        printf("Huruf Kecilnya: %c", tolower(karakter));
    
    // isdigit => Returns true(non-zero) if character is a digit
    }else if(isdigit(karakter)){
        cout << "Karakter anda sebuah digit" << endl;
    }

    return 0;
}