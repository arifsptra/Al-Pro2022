// Program Pola Pentol Korek Api
//  _       _   _         _   _  _   _   _
// | |  |   _|  _|  |_|  |_  |_   | |_| |_|
// |_|  |  |_   _|    |   _| |_|  | |_|  _|
//  
// ----------------------------------------
// 0 = 6 Korek
// 1 = 2 Korek
// 2 = 5 Korek
// 3 = 5 Korek
// 4 = 4 Korek
// 5 = 5 Korek
// 6 = 6 Korek
// 7 = 3 Korek
// 8 = 7 Korek
// 9 = 6 Korek

// Nama : Arif Saputra
// NIM  : A11.2021.13480

#include <iostream>

using namespace std;

void korek(int jumlahCase, int *nilaiA){
    for(int i=0; i<jumlahCase; i++){
        cout << "Masukkan Nilai " << i+1 << ": ";
        cin >> *nilaiA;
        switch(*nilaiA){
        case 0:
            *nilaiA = 6;
            break;
        case 1:
            *nilaiA = 2;
            break;
        case 2:
            *nilaiA = 5;
            break;
        case 3:
            *nilaiA = 5;
            break;
        case 4:
            *nilaiA = 4;
            break;
        case 5:
            *nilaiA = 5;
            break;
        case 6:
            *nilaiA = 6;
            break;
        case 7:
            *nilaiA = 3;
            break;
        case 8:
            *nilaiA = 7;
            break;
        case 9:
            *nilaiA = 6;
            break;
        default:
            *nilaiA = 0;
        }
        cout << "Nilai " << i+1 << ": " << *nilaiA << endl;
    }
}

int main()
{
    cout << "Nama   : Arif Saputra\n";
    cout << "NIM    : A11.2021.13480\n\n";

    int jumlahCase, nilaiA;

    cout << "Masukkan Jumlah Percobaan: ";
    cin >> jumlahCase;

    korek(jumlahCase, &nilaiA);

    return 0;
}
