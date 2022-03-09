// Kasus 2 - Program menghitung body mass index

#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

float bmi(float bb, float tb){
    return (bb/(tb*tb));
}

int main(){
    float bb, tb;
    cout << "Masukkan Berat Badan (kg): ";
    cin >> bb;
    cout << "Masukkan Tinggi Badan (m): ";
    cin >> tb;

    float hasil = bmi(bb, tb);

    cout << "BMI: " << setprecision(4) << hasil << endl;
    cout << "Anda ";

    if(hasil<18.5){
        cout << "Terlalu Kurus";
    }else if(hasil>=18.5 && hasil<=24.9){
        cout << "Normal";
    }else if(hasil>=25 && hasil<=29.9){
        cout << "Pra-Obesitas";
    }else if(hasil>=20 && hasil<=34.9){
        cout << "Obesitas Tingkat I";
    }else if(hasil>=35 && hasil<=39.9){
        cout << "Obesitas Tingkat II";
    }else if(hasil>=40){
        cout << "Obesitas Tingkat III";
    }

    return 0;
}