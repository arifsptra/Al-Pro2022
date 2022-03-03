// Tebak Output

#include <iostream>

using namespace std;

int main() {
    // Deklarasi
    int i, x, y, z, smaller;

    // Input Nilai X
    cout << "x= ";
    cin >> x;

    // Input NIlai Y
    cout << "y= ";
    cin >> y;

    // Jika Nilai X lebih besar dari Y maka smaller diberi nilainya Y
    if(x>y){
        smaller = y;

    // Namun Jika X tidak lebih besar dari Y maka smaller diberi nilainya X
    }else {
        smaller = x;
    }

    // Perulangan untuk memberi nilai ke Z
    for(i=1; i<smaller; i++) {
        // Jika nilai X modulus i sama dengan 0, dan
        // Nilai Y modulus i sama dengan 0
        if((x%i==0) && (y%i==0)){
            // Maka variabel Z akan diisi nilai dari variabel i
            z = i;
        }
    }
    // Menampilkan Nilai Z
    cout << "z= " << z;

    return 0;
}

// Question
// 1. Apa output program diatas?
// 2. Berikan judul yang cocok untuk program diatas?
// 3. Jelaskan alur program diatas?

// Answer
// 1. Output program diatas adalah nilai z (hasil perhitungan kondisi jika x modulus i dan y modulus i maka nilai variabel z akan diisi nilai dari variabel)
// 2. Program Mencari Nilai Terkecil dan Mencari Nilai Modulus Tertinggi
/* 3.   - Pertama memasukkan nilai x dan y
        - Kedua mencari nilai terendah dari x dan y yang kemudian nilai terendah dimasukkan ke variable smaller
        - ketiga melakukan pengulangan dengan maksimal perulangan nilai i tidak melebihi atau sama dengan nilai smaller perulangan dimulai dari variabel i yang bernilai 1, kemudian akan diincremen. Perulangan akan terus berjalan jika nilai i masih kurang dari nilai smaller
        - Didalam perulangan ada sebuah kondisi dimana jika nilai x modulus i sama dengan 0 dan nilai y modulus i sama dengan 0 maka variabel z akan diisi nilai dari variabel i, jika tidak maka nilai variabel z tetap dan keluar dari kondisi. Kemudian kembali ke pengulangan.
        - Terakhir menampilkan nilai z 
*/