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

    // Menampilkan hasil dari variable foo dibagi n
    cout << (foo/n) << endl;
    
    return 0;
}