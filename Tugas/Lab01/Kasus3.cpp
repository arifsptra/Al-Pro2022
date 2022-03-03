// Tebak Output

#include <iostream>

using namespace std;

int main(){
    // Deklarasi
    int n=8;
    int A[n]= {12, 3, 12, 34, 10, 11, 9, 10};
    int foo = 0;

    // Perulangan untuk menjumlahkan semua nilai array A kemudian dimasukkan ke variable foo
    for (int i=0; i<n; i++){
        foo = foo+A[i];
    }

    // Menampilkan hasil dari variable foo dibagi dengan varibel n
    cout << (foo/n) << endl;

    return 0;
}

// Question
// 1. Apa output program diatas?
// 2. Apakah ada Error? 
// 3. Jika ada error, apa errornya? Dan apa output setelah diperbaiki?
// 4. Berikan judul yang cocok untuk program diatas? 
// 5. Jelaskan alur program diatas?

// Answer
// 1. Output program diatas adalah hasil dari variable foo dibagi dengan varibel n
// 2. Ada
// 3. Kesalahan terletak pada kondisi perulangan, yang awalnya i<=n diubah menjadi i<n. Karena index array dimuali dari 0 dan nilai awal i nya adalah 0
// 4. Program mencari nilai rata-rata
/* 5.   - Pertama program akan melakukan perulangan sampai nilai i tidak lebih atau sama dengan nilai variabel n yang bernilai 8
        - Didalam perulangan ada inisialisasi variabel foo dimana nilai varibel foo akan ditambah dengan nilai varibel array index ke i. Sampai perulangan berakhir.
        - Setelah perulangan berakhir, kemudian akan menampilkan hasil bagi dari variable foo dibagi dengan varibel n
*/