#include <iostream>

using namespace std;

//definisi
typedef struct titik{
    int x,y;
};

typedef int bilbul;

//fungsi cetak titik
void cetakTitik(titik a){
    cout << "Sumbu x t0 = "<< a.x << endl;
    cout << "Sumbu y t0 = "<< a.y << endl;
}

void cetakTitik2(titik t[]){//dibuat
    for (int i=0;i<10;i++){
        cout << "Sumbu x t["<<i<<"]" <<t[i].x << endl;
        cout << "Sumbu y t["<<i<<"]" <<t[i].y << endl;
    }
}

void tambah2titik(titik a, titik b){
    titik hasil;
    hasil.x=a.x+b.x;
    hasil.y=a.y+b.y;
    cout << "Sumbu x hasil = "<< hasil.x << endl;
    cout << "Sumbu y hasil = "<< hasil.y << endl;
}
titik tambah2titikv2(titik a, titik b){
    titik hasil;
    hasil.x=a.x+b.x;
    hasil.y=a.y+b.y;
    return hasil;
}
int main(){
    bilbul a; //sama int a
    titik t0; //deklarasi variabel t0 bertipe titik
    titik t[10];//array of struct
    titik hasil;
    t0={5,7};
    cetakTitik(t0);
    for (int i=0;i<10;i++){
        t[i].x=(i+1)*2;//pengisian nilai pada sumbu x
        t[i].y=(i+1)*3-2;//pengisian nilai pada sumbu y
    }
    cetakTitik2(t);
    //tambah2titik(t0,t[2]);
    hasil=tambah2titikv2(t0,t[2]);
    cout << "Sumbu x hasil = "<< hasil.x << endl;
    cout << "Sumbu y hasil = "<< hasil.y << endl;
    return 0;
}