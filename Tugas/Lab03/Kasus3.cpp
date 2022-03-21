// Kasus 3 - Program Konversi Desimal ke Biner dengan prosedur

#include <iostream>

using namespace std;

void dtb(int bilangan, int *sisa){
    int hasilBagi, sisaBagi;

    if(bilangan <= 1){
        cout << bilangan;
        return;
    }

    sisaBagi = bilangan % 2;
    hasilBagi = bilangan / 2;

    dtb(hasilBagi, &sisaBagi);
    // cout << sisaBagi;
}

int main(){
    int x, hasil;

    cout << "Masukkan Bilangan Desimal: ";
    cin >> x;

    cout << "Hasil: ";
    dtb(x, &hasil);
    cout << hasil;
}