#include <iostream>
#include <string.h>

using namespace std;

class Barang2 {
    public:
    string nama;
    int qty;
    int harga;
    int diskon;

    // Constructor
    Barang2(string nama, int qty, int harga, int diskon){
        this->nama = nama;
        this->qty = qty;
        this->harga = harga;
        this->diskon = diskon*harga/100;
    }

    // // Destructor
    // ~Barang(){
    //     cout << "Finish!";
    // }

    void cetak(){
        cout << nama << " (" << qty << "x) : Rp. " << harga << " Anda mendapatkan diskon " << diskon <<  endl;
    }
};

int main(){
    Barang2 rogKW("Laptop ROG 15", 1, 1000000, 25);
    Barang2 vivoKW("V40", 1, 4500000, 10);

    rogKW.cetak();
    vivoKW.cetak();

    return 0;
}