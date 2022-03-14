// Kasus 1 - Program kalkulator sederhana dengan prosedur

#include <iostream>

using namespace std;

int functionKe1(int *x, int *y, char *opr){
    int hasil;

    if(*opr == '+'){
        hasil = *x + *y;
    }else if(*opr == '-'){
        hasil = *x - *y;
    }else if(*opr == '*'){
        hasil = *x * *y;
    }else if(*opr == '%'){
        hasil = *x % *y;
    }
    return hasil;
}

float functionKe2(float *p, float *q, char *opr){
    return (*p / *q);
}

int main(){
    int x, y;
    float p, q;
    char opr;

    cout << "Masukkan Operator: ";
    cin >> opr;
    
    if(opr == '/'){
        float hasil;

        cout << "Masukkan Nilai 1: ";
        cin >> p;
        cout << "Masukkan Nilai 2: ";
        cin >> q;

        hasil = functionKe2(&p, &q, &opr);
        cout << "Hasil: " << hasil << endl;
    }else {
        int hasil;

        cout << "Masukkan Nilai 1: ";
        cin >> x;
        cout << "Masukkan Nilai 2: ";
        cin >> y;

        hasil = functionKe1(&x, &y, &opr);
        cout << "Hasil: " << hasil << endl;
    }

    return 0;
}