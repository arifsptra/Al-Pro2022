#include <iostream>
#include <string>

using namespace std;

class Barang
{
    public:

    // attribut
    string nama;
    int qty, harga;
    float diskon;

    // constructor
    Barang(string nama, int qty, int harga, int diskon){
        this->nama = nama;
        this->qty = qty;
        this->harga = harga;
        this->diskon = diskon;
        setDiskon(diskon);
    }

    // method
    void setDiskon(int diskon){
        this->diskon/=100;
    }

    void cetak(){
        cout << nama << " (" << qty << " x) : Rp. " << harga << "[" << diskon*100 << "%]" << endl;
    }
};

int main(){
    Barang laptop("Laptop ROG 15inch", 15, 25000000, 25);
    laptop.cetak();

    Barang mouse("Mouse MX Master", 20, 1000000, 0);
    mouse.cetak();

    Barang keyboard("Keychron K3", 100, 1300000, 10);
    keyboard.cetak();
    printf("%.2f\n", keyboard.diskon);
    printf("%.2f\n", laptop.diskon);
    return 0;
}