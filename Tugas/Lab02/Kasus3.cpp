// Kasus 3 - Program Konversi Desimal ke Biner

#include <iostream>

using namespace std;

void dtb(int bilangan){
    int sisa, hasil;

    if(bilangan <= 1){
        cout << bilangan;
        return;
    }

    sisa = bilangan % 2;
    hasil = bilangan / 2;

    dtb(hasil);
    cout << sisa;
}

int main(){
    int x;
    cout << "Masukkan Bilangan Desimal: ";
    cin >> x;

    cout << "Hasil: ";
    dtb(x);
}