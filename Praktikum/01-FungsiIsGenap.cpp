#include <iostream>

using namespace std;

// Fungsi Is Genap => Mengembalikan Nilai True/False 1/0 karena bertipe data boolean
bool isGenap(int i){
    return i%2==0;
}

int main(){
    // Memanggil Fungsi isGenap()
    cout << isGenap(10) << endl; // True => 1
    cout << isGenap(11); // False => 0

    return 0;
}