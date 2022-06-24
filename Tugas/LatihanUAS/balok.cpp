#include <iostream>

using namespace std;

class Balok {
    public:
    int panjang, lebar, tinggi;

    Balok(int panjang, int lebar, int tinggi){
        this->panjang = panjang;
        this->lebar = lebar;
        this->tinggi = tinggi;

        if(panjang<=0){
            this->panjang = 1;
        }
        if(lebar<=0){
            this->lebar = 1;
        }
        if(tinggi<=0){
            this->tinggi = 1;
        }
    }

    int getVolume(Balok b){
        int vol = b.panjang * b.lebar * b.tinggi;
        return vol;
    }

    void cetak(Balok b){
        cout << "Balok dengan panjang " << b.panjang << ", lebar " << b.lebar << ", dan tingginya " << b.tinggi << ", volumenya " << b.getVolume(b);
    }
};

int main(){
    Balok b(10, 10, 10);
    b.cetak(b);

    return 0;
}