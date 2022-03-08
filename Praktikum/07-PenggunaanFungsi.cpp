#include <stdio.h>
#include <stdlib.h>

int jumlah(int a, int b); // Prototipe Fungsi

// Global Variables
int a, b, c;

// Program Utama
int main(){
    printf("Masukkan nilai a: ");
    scanf("%d", &a);
    printf("Masukkan nilai b: ");
    scanf("%d", &b);

    c = jumlah(a, b);
    printf("Hasil penjumlahan: %d", c);
}

// Fungsi
int jumlah(int x, int y) {
    return (x+y);
}