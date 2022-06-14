#include <iostream>

using namespace std;

typedef struct LuasPP {
    int p;
    int l;
};

int main(){
    // Deklarasi
    LuasPP lpp;
    int luas;

    printf("Program Menghitung Luas Persegi Panjang\n");

    // Input Panjang dan Lebar Persegi Panjang
    printf("Masukkan Panjang: ");
    scanf("%d", &(lpp.p));
    printf("Masukkan Lebar: ");
    scanf("%d", &(lpp.l));
    // cin >> lpp.p;
    // cin >> lpp.l;

    // Hitung Luas Persegi Panjang
    luas = lpp.p * lpp.l;

    // Menampilkan Hasil
    printf("Luas Persegi Panjang: %d", luas);

    return 0;
}