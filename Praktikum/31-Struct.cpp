#include <iostream>

using namespace std;

struct titik {
    int x, y;
}

// void cetakTitik(int x, int y){
//     cout << "Sumbu x baru: " << x << endl;
//     cout << "Sumbu y baru: " << y;
// }

void cetakTitik(struct titik z){
    cout << "Sumbu x baru: " << z.x << endl;
    cout << "Sumbu y baru: " << z.y;
}

void tambahTitik(int x1, int y1, int x2, int y2){
    struct titik baru;
    baru.x = x1+x2;
    baru.y = y1+y2;
//  cetakTitik(baru.x, baru.y);
    cetakTitik(baru);
}

int main(){
    struct titik t[2];
    for(int i=0; i<2; i++){
        cout << "Masukkan Sumbu X: ";
        cin >> t[i].x;
        cout << "Masukkan Sumbu Y: ";
        cin >> t[i].y;
    }
    tambahTitik(t[0].x, t[0].y, t[1].x, t[1].y);
}