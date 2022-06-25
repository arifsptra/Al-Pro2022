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

    int getVolume(){
        int vol = panjang * lebar * tinggi;
        return vol;
    }

    void cetak(){
        cout << "Balok dengan panjang " << panjang << ", lebar " << lebar << ", dan tingginya " << tinggi << ", volumenya " << getVolume();
    }
};

int main(){
    Balok b(10, 10, 10);
    b.cetak();

    return 0;
}