// Kasus 1 - Fungsi Kalkulator Sederhana

#include <iostream>

using namespace std;

int penjumlahan(int x, int y){
    return (x + y);
}

int pengurangan(int x, int y){
    return (x - y);
}

int perkalian(int x, int y){
    return (x * y);
}

int mdls(int x, int y) {
    return (x % y);
}

float pembagian(float x, float y){
    return (x /  y);
}

int main(){
    char opr;
    int nilai1, nilai2;

    cout << "Masukkan operator: ";
    cin >> opr;

    cout << "Masukkan nilai 1: ";
    cin >> nilai1;

    cout << "Masukkan nilai 2: ";
    cin >> nilai2;

    if(opr == '+'){
        cout << "Hasil: " << penjumlahan(nilai1, nilai2);
    }else if(opr == '-'){
        cout << "Hasil: " << pengurangan(nilai1, nilai2);
    }else if(opr == '*'){
        cout << "Hasil: " << perkalian(nilai1, nilai2);
    }else if(opr == '%'){
        cout << "Hasil: " << mdls(nilai1, nilai2);
    }else if(opr == '/'){
        cout << "Hasil: " << pembagian(nilai1, nilai2);
    }
}