// Kasus 1 - Program kalkulator sederhana dengan prosedur

#include <iostream>

using namespace std;

void function1(int nilai1, int nilai2, char opr, int *hasil){
    if(opr == '+'){
        *hasil = nilai1 + nilai2;
    }else if(opr == '-'){
        *hasil = nilai1 - nilai2;
    }else if(opr == '*'){
        *hasil = nilai1 * nilai2;
    }else if(opr == '%'){
        *hasil = nilai1 % nilai2;
    }
}

void function2(float nilai1, float nilai2, char opr, float *hasil){
    *hasil = nilai1 / nilai2;
}

int main(){
    char opr;

    cout << "Masukkan Operator: ";
    cin >> opr;

    if((opr=='+') || (opr=='-') || (opr=='*') || (opr=='%')){
        int nilai1, nilai2, hasil;
        cout << "Masukkan Nilai 1: ";
        cin >> nilai1;
        cout << "Masukkan Nilai 2: ";
        cin >> nilai2;
        function1(nilai1, nilai2, opr, &hasil);
        cout << "Hasil: " << hasil;
    }else if(opr == '/'){
        float nilai1, nilai2, hasil;
        cout << "Masukkan Nilai 1: ";
        cin >> nilai1;
        cout << "Masukkan Nilai 2: ";
        cin >> nilai2;
        function2(nilai1, nilai2, opr, &hasil);
        cout << "Hasil: " << hasil;
    }else {
        cout << "Maaf Operator yang anda Masukkan Salah";
    }

    return 0;
}