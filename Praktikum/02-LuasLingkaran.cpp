#include <iostream>

using namespace std;

// Global Variables
float l, r, phi = 3.14;

// Fungsi Input Nilai Jari Jari
void inputNilai(){
    cout << "Masukkan Jari Jari: ";
    cin >> r;
}

// Pencarian Luas Lingkaran
float outputNilai(){
    return l = phi * r * r;
}

// Memanggil Fungsi
int main(){
    inputNilai();
    cout << "Hasilnya adalah: " << outputNilai();

    return 0;
}