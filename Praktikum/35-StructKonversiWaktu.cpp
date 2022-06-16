#include <iostream>

using namespace std;

typedef struct W_Waktu{
    int dd;
    int mm;
    int jj;
    W_Waktu konversiD2W(int detik);
    void cetakWaktu(W_Waktu w);
    int konversiW2D(W_Waktu w);
}Waktu;

W_Waktu Waktu::konversiD2W(int detik){
    Waktu w;
    w.jj = detik/3600;
    detik = detik%3600;
    w.mm = detik/60;
    detik = detik%60;
    w.dd = detik;

    return w;
}

void Waktu::cetakWaktu(W_Waktu w){
    cout << "Waktu: " << w.jj << " Jam " << w.mm << " Menit " << w.dd << " Detik" << endl;
}

int Waktu::konversiW2D(W_Waktu w){
    int detik=0;
    detik = (w.jj*3600) + (w.mm*60) + w.dd;

    return detik;
}

int main(){
    Waktu w;
    W_Waktu waktu;
    waktu = w.konversiD2W(40000);
    w.cetakWaktu(waktu);
    cout << "Konversi ke detik: " << w.konversiW2D(waktu) << endl;
    
    return 0;
}