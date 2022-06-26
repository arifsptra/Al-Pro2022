#include <iostream>
#include <string>
#include "Waktu.h"

using namespace std;

#include "waktu.h"

class Jadwal{
    public:

    // attribut
    string matkul, ruang;
    Waktu mulai, selesai;
  
    Jadwal(string matkul, string ruang, Waktu mulai, Waktu selesai){
        this->matkul = matkul;
        this->ruang = ruang;
        this->mulai = mulai;
        this->selesai = selesai;
    }

    Waktu durasi(){
        Waktu durasi;
        durasi.jj = (selesai.jj*3600) - (mulai.jj*3600);
        durasi.mm = (selesai.mm*60) - (mulai.mm*60);
        durasi.dd = (selesai.dd) - (mulai.dd);
        int jml = durasi.jj + durasi.mm + durasi.dd;
        
        durasi.jj = jml/3600;
        durasi.mm = (jml%3600)/60;
        durasi.dd = jml%60;
        return durasi;
    }

    int jmlSKS(){
        Waktu sks = durasi();
        int jmlJam = (sks.jj*60) + (sks.mm) + (sks.dd/60);
        return jmlJam/50;
    }
    
    void cetak(){
        cout << matkul << " [" << ruang << "] " << "waktu (" << mulai.toString() << " - " << selesai.toString() << ")" << endl;
    }
};

int main(){
    Jadwal jdw = Jadwal("Basis Data", "H.4.5", Waktu(9, 30, 0), Waktu(12, 0, 0));
    jdw.cetak();

    Jadwal jdw = Jadwal("Algoritma", "D.2.H", Waktu(8, 40, 0), Waktu(10, 20, 0));
    jdw.cetak();

        
    Jadwal jdw = Jadwal("Basis Data", "H.4.5", Waktu(9, 30, 0), Waktu(12, 0, 0));
    cout << jdw.durasi().toString() << endl;

    Jadwal jdw = Jadwal("Algoritma", "D.2.H", Waktu(8, 40, 0), Waktu(10, 20, 0));
    cout << jdw.durasi().toString() << endl;

        
    Jadwal jdw = Jadwal("Basis Data", "H.4.5", Waktu(9, 30, 0), Waktu(12, 0, 0));
    cout << jdw.jmlSKS() << endl;

    Jadwal jdw = Jadwal("Algoritma", "D.2.H", Waktu(8, 40, 0), Waktu(10, 20, 0));
    cout << jdw.jmlSKS() << endl;

    return 0;
}