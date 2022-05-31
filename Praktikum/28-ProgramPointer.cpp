#include <iostream>

using namespace std;

int input(int *nilai1, int *nilai2){
    cout << "Masukkan Nilai 1: ";
    cin >> *nilai1;
    cout << "Masukkan Nilai 2: ";
    cin >> *nilai2;
}

int operasi(int nilai1, int nilai2){
    cout << "Hasil Tambah: " << nilai1+nilai2 << endl;
    cout << "Hasil Kurang: " << nilai1-nilai2 << endl;
}

int main(){
    int nilai1, nilai2;
    
    input(&nilai1, &nilai2);
    operasi(nilai1, nilai2);

    return 0;
}