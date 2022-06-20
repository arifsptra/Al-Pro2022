#include <iostream>
#include <string.h>

using namespace std;

class Barang{
    public:
    string nama;
    int qty;
    int harga;

    void cetak(){
        cout << nama << " (" << qty << "x) : Rp. " << harga << endl;
    }
};

int main(){
    Barang baru;

    baru.nama = "Komputer";
    baru.qty = 10;
    baru.harga = 100000000;
    baru.cetak();

    baru.nama = "Laptop";
    baru.qty = 4;
    baru.harga = 50000000;
    baru.cetak();
    return 0;
}