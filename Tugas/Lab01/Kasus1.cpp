// Konversi Detik ke Jam:Menit:Detik

#include <iostream>

using namespace std;

int main(){
    // Deklarasi
    int detik, jam, menit, sisadetik;
    
    // Input Detik
    cout << "Masukkan Detik: ";
    cin >> detik;

    // Konversi Detik ke Jam
    jam = detik/3600;
    sisadetik = detik - (jam*3600);

    // Konversi Detik ke Menit
    menit = sisadetik/60;
    sisadetik = sisadetik - (menit*60);

    cout << jam << "Jam " << menit << "Menit " << sisadetik << "Detik";

    return 0;
}