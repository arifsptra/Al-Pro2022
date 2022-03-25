// Kasus 3 - Program Konversi Biner ke Desimal dengan prosedur

#include <iostream>

using namespace std;

void btd(int nilaiBiner, int *nilaiDesimal){
    int i=1, sisa;

    while(nilaiBiner != 0){
        sisa = nilaiBiner % 10;
        (*nilaiDesimal) = (*nilaiDesimal) + (sisa*i);
        i = i*2;
        nilaiBiner = nilaiBiner/10;
    }
}

int main(){
    int nilaiDesimal, nilaiBiner;

    nilaiDesimal = 0;
    cout << "Masukkan angka biner: ";
    cin >> nilaiBiner;
    btd(nilaiBiner, &nilaiDesimal);
    cout << "Hasil dari biner ke desimal: " << nilaiDesimal;
}