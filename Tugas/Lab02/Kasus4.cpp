// Kasus 4 - Program Konversi Biner ke Desimal

#include <iostream>

using namespace std;

void btd(int bilangan){
    int sisa, angka, hasil, i=1;

    while(bilangan != 0){
        angka = bilangan % 10;
        hasil += (angka*i);
        i*=2;
        bilangan /= 10;
    }

    cout << hasil;
}

int main(){
    int b;
    cout << "Masukkan Bilangan Biner: ";
    cin >> b;

    cout << "Hasil: ";
    btd(b);
}