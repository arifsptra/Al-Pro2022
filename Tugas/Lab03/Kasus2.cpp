// Kasus 2 - Program menghitung Body Mass Index (BMI)

#include <iostream>
#include <iomanip>

using namespace std;

void bmi(float bb, float tb, float *hasil){
    *hasil = (bb/(tb*tb));
}

int main(){
    float bb, tb, hasil;

    cout << "Masukkan Berat Badan: ";
    cin >> bb;
    cout << "Masukkan Tinggi Badan: ";
    cin >> tb;

    bmi(bb, tb, &hasil);

    cout << "Hasil: " << setprecision(4) << hasil << endl;
    cout << "Anda ";

    if(hasil<18.5){
        cout << "Terlalu Kurus";
    }else if(hasil>=18.5 && hasil<25){
        cout << "Normal";
    }else if(hasil>=25 && hasil<30){
        cout << "Pra-Obesitas";
    }else if(hasil>=30 && hasil<35){
        cout << "Obesitas Tingkat I";
    }else if(hasil>=35 && hasil<40){
        cout << "Obesitas Tingkat II";
    }else if(hasil>=40){
        cout << "Obesitas Tingkat III";
    }

    return 0;
}