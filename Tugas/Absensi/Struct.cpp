#include <iostream> // Arif Saputra - A11.2021.13480

using namespace std;

// Definisi
typedef struct titik { // titik merupakan tipe data baru yang dibuat dengan struct
    int x;
    int y;
};

titik* isiTitik(titik *a, int n){
    for(int i=0; i<n; i++){
        a[i].x = (i+1)*3;
        a[i].y = (i+2)*2;
    }
    return a;
}

int main(){
    titik *p = new titik[3];
    isiTitik(p, 3);
    for(int i=0; i<3; i++){
        cout << "p[" << i << "].x : " << p[i].x << endl;
        cout << "p[" << i << "].y : " << p[i].y << endl;
    }

    return 0;
}