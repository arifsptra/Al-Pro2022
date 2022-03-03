// Program Tebak Output
// Program Mencari Nilai Terkecil dan Mencari Nilai Modulus Tertinggi

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
        cout << i << endl;
        if((x%i==0) && (y%i==0)){
            // Maka nilai Z akan diganti menjadi nilainya I
            z = i;
        }
    }
    // Menampilkan Nilai Z
    cout << "z= " << z;

    return 0;
}